/*
 *  Copyright (C) 2012 Felix Geyer <debfx@fobos.de>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEEPASSX_DRAGTABWIDGET_H
#define KEEPASSX_DRAGTABWIDGET_H

#include <QtGui/QTabBar>

class DragTabBar : public QTabBar
{
    Q_OBJECT

public:
    DragTabBar(QWidget* parent = 0);

protected:
    void dragEnterEvent(QDragEnterEvent* event);
    void dragMoveEvent(QDragMoveEvent* event);
    void dragLeaveEvent(QDragLeaveEvent* event);
    void dropEvent(QDropEvent* event);
    void tabLayoutChange();

private Q_SLOTS:
    void dragSwitchTab();

private:
    QTimer* m_tabSwitchTimer;
    int m_tabSwitchIndex;
};

#endif // KEEPASSX_DRAGTABWIDGET_H
