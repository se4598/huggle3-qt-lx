//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

#ifndef HUGGLEQUEUEITEMLABEL_H
#define HUGGLEQUEUEITEMLABEL_H

#include "config.hpp"
// now we need to ensure that python is included first, because it
// simply suck :P
// seriously, Python.h is shitty enough that it requires to be
// included first. Don't believe it? See this:
// http://stackoverflow.com/questions/20300201/why-python-h-of-python-3-2-must-be-included-as-first-together-with-qt4
#ifdef PYTHONENGINE
#include <Python.h>
#endif

#include <QMouseEvent>
#include <QFrame>
#include "core.hpp"
#include "exception.hpp"

namespace Ui
{
    class HuggleQueueItemLabel;
}

namespace Huggle
{
    class WikiEdit;
    class HuggleQueue;

    //! This is item of queue, it is derived from qt object
    class HuggleQueueItemLabel : public QFrame
    {
            Q_OBJECT

        public:
            static int Count;

            explicit HuggleQueueItemLabel(QWidget *parent = 0);
            ~HuggleQueueItemLabel();
            void SetName(QString name);
            QString GetName();
            void Process(QLayoutItem *qi = NULL);
            void Remove();
            HuggleQueue *ParentQueue;
            WikiEdit *Page;

        protected:
            void mousePressEvent(QMouseEvent *event);

        private:
            Ui::HuggleQueueItemLabel *ui;
    };
}

#endif // HUGGLEQUEUEITEMLABEL_H
