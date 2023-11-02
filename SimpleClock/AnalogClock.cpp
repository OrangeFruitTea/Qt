#include "AnalogClock.h"

AnalogClock::AnalogClock(QWidget* parent)
	: QWidget(parent)
{
	QTimer* Timer = new QTimer(this);
	connect(Timer, &QTimer::timeout, this, QOverload<>::of(&AnalogClock::update));
	Timer->start(1000);
	setWindowTitle(tr("Analog Clock"));
	resize(200, 100);

}

void AnalogClock::paintEvent(QPaintEvent* event)
{
	static const QPoint hourHand[3] = {
		QPoint(7, 8),
		QPoint(-7, 8)
	};
}