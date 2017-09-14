//
// Created by agabor on 2017.09.13..
//

#ifndef CV_TEST_CONFIGWIDGET_H
#define CV_TEST_CONFIGWIDGET_H

#include <functional>

#include <QtWidgets/QWidget>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLayout>

#include "Image.h"

class ConfigWidget : public QDockWidget {
public:
    explicit ConfigWidget(QWidget* parent);
    MatchSettings settings;
    bool changed = true;
private:
    void addDoubleParameter(QLayout *layout, QString name, double value, std::function<void (double)> setter);
};


#endif //CV_TEST_CONFIGWIDGET_H