/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUser.h
 *
 * A User who is purchasing from the pet store
 */

#ifndef OAIUser_H
#define OAIUser_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIUser: public OAIObject {
public:
    OAIUser();
    OAIUser(QString json);
    ~OAIUser() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getId() const;
    void setId(const qint64 &id);

    QString getUsername() const;
    void setUsername(const QString &username);

    QString getFirstName() const;
    void setFirstName(const QString &first_name);

    QString getLastName() const;
    void setLastName(const QString &last_name);

    QString getEmail() const;
    void setEmail(const QString &email);

    QString getPassword() const;
    void setPassword(const QString &password);

    QString getPhone() const;
    void setPhone(const QString &phone);

    qint32 getUserStatus() const;
    void setUserStatus(const qint32 &user_status);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    qint64 id;
    bool m_id_isSet;
    bool m_id_isValid;
    QString username;
    bool m_username_isSet;
    bool m_username_isValid;
    QString first_name;
    bool m_first_name_isSet;
    bool m_first_name_isValid;
    QString last_name;
    bool m_last_name_isSet;
    bool m_last_name_isValid;
    QString email;
    bool m_email_isSet;
    bool m_email_isValid;
    QString password;
    bool m_password_isSet;
    bool m_password_isValid;
    QString phone;
    bool m_phone_isSet;
    bool m_phone_isValid;
    qint32 user_status;
    bool m_user_status_isSet;
    bool m_user_status_isValid;
};

}

#endif // OAIUser_H
