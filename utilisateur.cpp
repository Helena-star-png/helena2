#include"utilisateur.h"
#include <QCryptographicHash>

Utilisateur::Utilisateur(const QString &login, const QString &password)
    :m_login(login),m_role("user")
{
    m_rolePermissions["user"] = {"read"};
    m_rolePermissions["admin"] = {"read","write", "delete"};

    m_passwordHash = hashPassword(password);
}

// Fonction privée pour hasher le mot de passe
QByteArray Utilisateur::hashPassword(const QString &password) const
{
    return QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Sha256);
}
// Authentification
bool Utilisateur::authentificate(const QString &login, const QString &password) const
{
    return(m_login == login) && (m_passwordHash == hashPassword(password));
}

//Réintialisation du mot de passe
bool Utilisateur:: resetPassword(const QString &oldPassword, const QString &newPassword)
{
    if(hashPassword(oldPassword) == m_passwordHash){
        m_passwordHash = hashPassword(newPassword);
        return true;
    }
    return false;
}

// Réinitialisation forcée
void Utilisateur::forceResetPassword(const QString &newPassword)
{
    m_passwordHash = hashPassword(newPassword);
}

// Gestion des rôles
void Utilisateur::setRole(const QString &role)
{
    if(m_rolePermissions.contains(role)){
        m_role = role;
    }
}

QString Utilisateur::getRole() const
{
    return m_role;
}

// vérification des permissions
bool Utilisateur::hasPermission(const QString &permission) const
{
    return m_rolePermissions.value(m_role).contains(permission);
}

QString Utilisateur::getLogin() const
{
    return m_login;
}

