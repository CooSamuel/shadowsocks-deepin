//
// Created by pikachu on 17-8-18.
//

#ifndef SHADOWSOCKS_CLIENT_GUICONFIGDAO_H
#define SHADOWSOCKS_CLIENT_GUICONFIGDAO_H

#include <models.h>
#include "common/common.h"

class GuiConfigDao {
public:
    static GuiConfigDao *instance();

    void save(GuiConfig guiConfig);

    GuiConfig get();

private:
    GuiConfigDao();

    QFile configFile;
};


#endif //SHADOWSOCKS_CLIENT_GUICONFIGDAO_H
