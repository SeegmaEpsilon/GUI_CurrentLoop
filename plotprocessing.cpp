#include <mainwindow.h>
#include <ui_mainwindow.h>

void MainWindow::setupGraphsOnce(int canvas_index, bool from_ui)
{
  static bool isSetupDoneA = false;
  static bool isSetupDoneV = false;

  if (canvas_index == DRAW_ACCELERATION)
  {
    if (!isSetupDoneA || from_ui)
    {
      // Проверяем, созданы ли графики и их количество, если нет - создаем
      if (ui->canvas_A->graphCount() < 4)
      {
        ui->canvas_A->addGraph(); // График для Виброускорения
        ui->canvas_A->addGraph(); // График для Виброускорения
        ui->canvas_A->addGraph(); // График для Виброускорения
        ui->canvas_A->addGraph(); // График для Виброускорения
      }

      ui->canvas_A->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignLeft|Qt::AlignTop);
      ui->canvas_A->legend->setVisible(true);
      QFont legendFont = font();
      legendFont.setPointSize(8);
      ui->canvas_A->legend->setFont(legendFont);
      ui->canvas_A->legend->setBrush(QBrush(QColor(255, 255, 255, 230)));

      ui->canvas_A->graph(0)->setName("Виброускорение X (СКЗ)");
      ui->canvas_A->graph(0)->setPen(QPen(Qt::blue));
      ui->canvas_A->graph(0)->rescaleAxes(true);

      ui->canvas_A->graph(1)->setName("Виброускорение Y (СКЗ)");
      ui->canvas_A->graph(1)->setPen(QPen(Qt::red));
      ui->canvas_A->graph(1)->rescaleAxes(true);

      ui->canvas_A->graph(2)->setName("Виброускорение Z (СКЗ)");
      ui->canvas_A->graph(2)->setPen(QPen(Qt::darkGreen));
      ui->canvas_A->graph(2)->rescaleAxes(true);

      ui->canvas_A->graph(3)->setName("Виброускорение XYZ (СКЗ)");
      ui->canvas_A->graph(3)->setPen(QPen(Qt::black));
      ui->canvas_A->graph(3)->rescaleAxes(true);

      /* Настройка холста, на котором будет отрисовываться график
             Разрешаем зум и перемещение по графику */
      ui->canvas_A->setInteraction(QCP::iRangeDrag, true);
      ui->canvas_A->setInteraction(QCP::iRangeZoom, true);
      ui->canvas_A->xAxis->setLabel("Точки отсчета");
      ui->canvas_A->yAxis->setLabel("A");

      isSetupDoneA = true;
    }
  }
  else if (canvas_index == DRAW_VELOCITY)
  {
    if (!isSetupDoneV || from_ui)
    {
      // Проверяем, созданы ли графики и их количество, если нет - создаем
      if (ui->canvas_V->graphCount() < 4)
      {
        ui->canvas_V->addGraph(); // График для Виброскорости
        ui->canvas_V->addGraph(); // График для Виброскорости
        ui->canvas_V->addGraph(); // График для Виброскорости
        ui->canvas_V->addGraph(); // График для Виброскорости
      }

      ui->canvas_V->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignLeft|Qt::AlignTop);
      ui->canvas_V->legend->setVisible(true);
      QFont legendFont = font();
      legendFont.setPointSize(8);
      ui->canvas_V->legend->setFont(legendFont);
      ui->canvas_V->legend->setBrush(QBrush(QColor(255, 255, 255, 230)));

      ui->canvas_V->graph(0)->setName("Виброскорость X (СКЗ)");
      ui->canvas_V->graph(0)->setPen(QPen(Qt::blue));
      ui->canvas_V->graph(0)->rescaleAxes(true);

      ui->canvas_V->graph(1)->setName("Виброскорость Y (СКЗ)");
      ui->canvas_V->graph(1)->setPen(QPen(Qt::red));
      ui->canvas_V->graph(1)->rescaleAxes(true);

      ui->canvas_V->graph(2)->setName("Виброскорость Z (СКЗ)");
      ui->canvas_V->graph(2)->setPen(QPen(Qt::darkGreen));
      ui->canvas_V->graph(2)->rescaleAxes(true);

      ui->canvas_V->graph(3)->setName("Виброскорость XYZ (СКЗ)");
      ui->canvas_V->graph(3)->setPen(QPen(Qt::black));
      ui->canvas_V->graph(3)->rescaleAxes(true);

      /* Настройка холста, на котором будет отрисовываться график
             Разрешаем зум и перемещение по графику */
      ui->canvas_V->setInteraction(QCP::iRangeDrag, true);
      ui->canvas_V->setInteraction(QCP::iRangeZoom, true);
      ui->canvas_V->xAxis->setLabel("Точки отсчета");
      ui->canvas_V->yAxis->setLabel("V");

      isSetupDoneV = true;
    }
  }
}

void MainWindow::plotGraph(int canvas_index, int graphIndex, float_t value)
{
  static const int maxDataPoints = 500; // Максимальное количество точек данных для отображения

  QCustomPlot* canvas = nullptr;
  int* counter = nullptr;

  // Выбор соответствующего холста и счетчика
  if (canvas_index == DRAW_ACCELERATION)
  {
    canvas = ui->canvas_A;
    counter = &counterA;
  }
  else if (canvas_index == DRAW_VELOCITY)
  {
    canvas = ui->canvas_V;
    counter = &counterV;
  }

  setupGraphsOnce(canvas_index); // Настройка графиков, если это не было сделано ранее

  canvas->graph(graphIndex)->addData(*counter, value); // Добавляем данные на указанный график

  // Удаляем старые данные, если их количество превышает maxDataPoints
  if (canvas->graph(graphIndex)->data()->size() > maxDataPoints)
  {
    canvas->graph(graphIndex)->data()->removeBefore(*counter - maxDataPoints);
  }

  canvas->graph(graphIndex)->rescaleKeyAxis();
  if(ui->checkBox_autoscale->isChecked()) { canvas->rescaleAxes(); }
  canvas->replot(); // Масштабируем оси и перерисовываем график

  (*counter)++; // Увеличиваем счетчик для новой точки
}

void MainWindow::slotResetCanvas()
{
  if (activeCanvas)
  {
    activeCanvas->rescaleAxes();
    activeCanvas->replot();
  }
}

void MainWindow::slotSavePlotPNG()
{
  if (!activeCanvas)
    return;

  QString file_name = QFileDialog::getSaveFileName(this, tr("Сохранить изображение"), QCoreApplication::applicationDirPath() + "/VD17", tr("Изображение (*.png)"));
  if (!file_name.isEmpty())
    activeCanvas->savePng(file_name);
}

void MainWindow::slotSaveDataFromPlot()
{
  if (!activeCanvas)
    return;

  QString file_name = QFileDialog::getSaveFileName(this, tr("Сохранить данные"), QCoreApplication::applicationDirPath() + "/VD17", tr("Данные (*.txt)"));
  if (file_name.isEmpty())
    return;

  QFile file(file_name);
  if (file.open(QIODevice::WriteOnly | QIODevice::Text))
  {
    QTextStream writeStream(&file);
    for (int i = 0; i < activeCanvas->graphCount(); ++i)
    {
      const QCPGraph* graph = qobject_cast<const QCPGraph*>(activeCanvas->graph(i));
      if (graph)
      {
        QSharedPointer<QCPDataContainer<QCPGraphData>> plotData = graph->data();
        for (auto it = plotData->constBegin(); it != plotData->constEnd(); ++it)
        {
          writeStream << QString("%1,%2\n").arg(it->key).arg(it->value, 0, 'f', 2);
        }
        writeStream << "\n"; // Separate data sets by a newline
      }
    }
    file.close();
  }
}
