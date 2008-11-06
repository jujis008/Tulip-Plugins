#ifndef VIEWER_H_
#define VIEWER_H_

#include "Graphic.h"
#include "GraphicLegend.h"

#include <QGraphicsScene>
#include <QGraphicsView>

class Viewer : public QWidget, public Observer
{
public:
	Viewer();
	Viewer(IData<float>*, Graphic<float>*);

	void addGraphic(IData<float>*, Graphic<float>*);
	std::set<Graphic<float>*> getGraphics(IData<float>*);
	void removeGraphic(IData<float>*, Graphic<float>*);
	void setData(IData<float>*, Graphic<float>*);

	void show();
	inline void scale(float factor) { _view->scale(factor, factor); }

protected:
	void updateAxis();
	//void paintEvent(QPaintEvent* event);
	QGraphicsScene* _scene; //do not delete, it's Qt's job
	QGraphicsView* _view; //do not delete, it's Qt's job
	QGraphicsItemGroup* _axis;

	void update(Observable * subject);

	std::multimap<IData<float>*, Graphic<float>* > _mapGraphics;
	GraphicLegend<float>* _graphicLegend;
};

#endif /* VIEWER_H_ */
