#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

class Connexion
{
public:
    static Connexion& createInstance();
    bool createConnexion();

private:
    QSqlDatabase db;
    Connexion();
    ~Connexion();
    Connexion(const Connexion&) = delete;
    Connexion& operator=(const Connexion&) = delete;
};

#endif // CONNEXION_H
