/*
 * Copyright (C) 2021 Uniontech Software Technology Co., Ltd.
 *
 * Author:     luzhen<luzhen@uniontech.com>
 *
 * Maintainer: luzhen<luzhen@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef PROJECT_H
#define PROJECT_H

#include <QObject>
#include "builderglobals.h"

class BuildTarget;
class Project : public QObject
{
    Q_OBJECT
public:
    explicit Project(QObject *parent = nullptr);

    QString projectFilePath() const;
    QString projectDirectory() const;
    QString rootProjectDirectory() const;

    BuildTarget *activeTarget() const;
    ToolChainType toolChainType() const;
signals:

public slots:

private:
    BuildTarget *curTarget = nullptr;
};

#endif // PROJECT_H
