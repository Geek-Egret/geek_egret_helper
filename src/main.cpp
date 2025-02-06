#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <windows.h>

#include "greet_window.h"
#include "ge_json.h"

int main(int argc, char *argv[])
{
    QApplication GE_Helper(argc, argv);
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "GEEK_EGRET_HELPER_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            GE_Helper.installTranslator(&translator);
            break;
        }
    }
    // 读取配置文件
    JSON.configFileRead(JSON.CONFIG);
    JSON.configFileRead(JSON.PATHS);
    GeekEgret::configSet();

    greetWindow* Greet = new greetWindow();
    Greet->show();

    return GE_Helper.exec();
}
