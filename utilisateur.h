#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QString>
#include <QByteArray>
#include <QMap>
#include <QStringList>

class Utilisateur
{
public:
    explicit Utilisateur(const QString &login = "",
                         const QString &password = "");

    QByteArray hashPassword(const QString &password) const;

    bool authentificate(const QString &login, const QString &password) const;

    bool resetPassword(const QString &oldPassword, const QString &newPassword);

    void forceResetPassword(const QString &newPassword);

    void setRole(const QString &role);
    QString getRole() const;
    bool hasPermission(const QString &permission) const;

    QString getLogin() const;
private:
    QString m_login;
    QByteArray m_passwordHash;
    QString m_role;

    QMap<QString, QStringList> m_rolePermissions;

};

#endif//UTILISATEUR_H
