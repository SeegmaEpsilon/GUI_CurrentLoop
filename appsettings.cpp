#include "appsettings.h"
#include "ui_appsettings.h"

appSettings::appSettings(QWidget* parent) : QDialog(parent), ui(new Ui::appSettings)
{
  ui->setupUi(this);
  this->setWindowTitle("Настройки");
  ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Сохранить");
  ui->buttonBox->button(QDialogButtonBox::Cancel)->setText("Отмена");
  QString labelText = "Настройки приложения ВД17-Сервис";
  ui->label->setText(labelText + " " + SOFTWARE_VERSION);
}

appSettings::~appSettings() { delete ui; }

void appSettings::on_buttonBox_accepted()
{
  appSettingsStruct tempSettings;

  QString baudRate = ui->comboBox_UART_speed->currentText();
  QString dataBits = ui->comboBox_UART_dataBits->currentText();
  QString parityControl = ui->comboBox_UART_parity->currentText();
  QString stopBits = ui->comboBox_UART_stopBits->currentText();
  QString flowControl = ui->comboBox_UART_flowControl->currentText();

  tempSettings.baudRate = baudRate;
  tempSettings.dataBits = dataBits;
  tempSettings.parityControl = parityControl;
  tempSettings.stopBits = stopBits;
  tempSettings.flowControl = flowControl;

  emit needSaveSettings(tempSettings);
}

void appSettings::setVisibleSettings(appSettingsStruct settings)
{
  ui->comboBox_UART_speed->setCurrentIndex(ui->comboBox_UART_speed->findText(settings.baudRate));
  ui->comboBox_UART_dataBits->setCurrentIndex(ui->comboBox_UART_dataBits->findText(settings.dataBits));

  QString textToFind;

  QSerialPort::Parity parity = static_cast<QSerialPort::Parity>(settings.parityControl.toInt());
  if (parity == QSerialPort::NoParity)
    textToFind = "Не используется";
  else if (parity == QSerialPort::EvenParity)
    textToFind = "Четность";
  else if (parity == QSerialPort::OddParity)
    textToFind = "Нечетность";
  else if (parity == QSerialPort::SpaceParity)
    textToFind = "Пространственный";
  else if (parity == QSerialPort::MarkParity)
    textToFind = "Маркировочный";
  ui->comboBox_UART_parity->setCurrentIndex(ui->comboBox_UART_parity->findText(textToFind));

  QSerialPort::StopBits stopBits = static_cast<QSerialPort::StopBits>(settings.stopBits.toInt());
  if (stopBits == QSerialPort::OneStop)
    textToFind = "1";
  else if (stopBits == QSerialPort::OneAndHalfStop)
    textToFind = "1.5";
  else if (stopBits == QSerialPort::TwoStop)
    textToFind = "2";
  ui->comboBox_UART_stopBits->setCurrentIndex(ui->comboBox_UART_stopBits->findText(textToFind));

  QSerialPort::FlowControl flowControl = static_cast<QSerialPort::FlowControl>(settings.flowControl.toInt());
  if (flowControl == QSerialPort::NoFlowControl)
    textToFind = "Не используется";
  else if (flowControl == QSerialPort::HardwareControl)
    textToFind = "Аппаратный";
  else if (flowControl == QSerialPort::SoftwareControl)
    textToFind = "Программный";
  ui->comboBox_UART_flowControl->setCurrentIndex(ui->comboBox_UART_flowControl->findText(textToFind));
}

void appSettings::on_pushButton_defaultSettings_clicked()
{
  ui->comboBox_UART_dataBits->setCurrentIndex(0);
  ui->comboBox_UART_flowControl->setCurrentIndex(0);
  ui->comboBox_UART_parity->setCurrentIndex(0);
  ui->comboBox_UART_speed->setCurrentIndex(0);
  ui->comboBox_UART_stopBits->setCurrentIndex(0);
}
