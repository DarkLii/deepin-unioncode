// SPDX-FileCopyrightText: 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef RECENTDISPLAY_H
#define RECENTDISPLAY_H

#include <QWidget>
#include "common/common.h"

class RecentDisplayPrivate;
class RecentDisplay : public QWidget
{
    Q_OBJECT
    RecentDisplayPrivate *const d;
public:
    enum ItemRole{
        ProjectKitName = Qt::ItemDataRole::UserRole,
        ProjectLanguage,
        ProjectWorkspace,
    };
    explicit RecentDisplay(QWidget *parent = nullptr);
    virtual ~RecentDisplay();
    static RecentDisplay *instance();

public slots:
    void addDocument(const QString &filePath);
    void addProject(const QString &kitName,
                    const QString &language,
                    const QString &workspace);

private slots:
    void doDoubleClickedProject(const QModelIndex &index);
    void doDoubleCliekedDocument(const QModelIndex &index);
};

#endif // RECENTDISPLAY_H
