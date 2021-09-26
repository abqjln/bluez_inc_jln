//
// Created by martijn on 12/9/21.
//

#include "service.h"

Service* binc_service_create(GDBusConnection *connection, const char* path) {
    g_assert(connection != NULL);
    g_assert(path != NULL);


    Service *result = g_new0(Service, 1);
    result->connection = connection;
    result->path = path;
    result->uuid = NULL;
    return result;
}