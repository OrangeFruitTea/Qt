#pragma once
#include <QtWidgets/qwidget.h>
#include <qtimer.h>

class AnalogClock : public QWidget
{
	Q_OBJECT

public:
	AnalogClock(QWidget* parent = NULL);

protected:
	void paintEvent(QPaintEvent* event) override;
};