/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIBusinessConnection.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBusinessConnection::OAIBusinessConnection(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBusinessConnection::OAIBusinessConnection() {
    this->initializeModel();
}

OAIBusinessConnection::~OAIBusinessConnection() {}

void OAIBusinessConnection::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_user_chat_id_isSet = false;
    m_user_chat_id_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_is_enabled_isSet = false;
    m_is_enabled_isValid = false;

    m_rights_isSet = false;
    m_rights_isValid = false;
}

void OAIBusinessConnection::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBusinessConnection::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_user_chat_id_isValid = ::tele_rest::fromJsonValue(m_user_chat_id, json[QString("user_chat_id")]);
    m_user_chat_id_isSet = !json[QString("user_chat_id")].isNull() && m_user_chat_id_isValid;

    m_date_isValid = ::tele_rest::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_is_enabled_isValid = ::tele_rest::fromJsonValue(m_is_enabled, json[QString("is_enabled")]);
    m_is_enabled_isSet = !json[QString("is_enabled")].isNull() && m_is_enabled_isValid;

    m_rights_isValid = ::tele_rest::fromJsonValue(m_rights, json[QString("rights")]);
    m_rights_isSet = !json[QString("rights")].isNull() && m_rights_isValid;
}

QString OAIBusinessConnection::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBusinessConnection::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_user_chat_id_isSet) {
        obj.insert(QString("user_chat_id"), ::tele_rest::toJsonValue(m_user_chat_id));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::tele_rest::toJsonValue(m_date));
    }
    if (m_is_enabled_isSet) {
        obj.insert(QString("is_enabled"), ::tele_rest::toJsonValue(m_is_enabled));
    }
    if (m_rights.isSet()) {
        obj.insert(QString("rights"), ::tele_rest::toJsonValue(m_rights));
    }
    return obj;
}

QString OAIBusinessConnection::getId() const {
    return m_id;
}
void OAIBusinessConnection::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIBusinessConnection::is_id_Set() const{
    return m_id_isSet;
}

bool OAIBusinessConnection::is_id_Valid() const{
    return m_id_isValid;
}

OAIUser OAIBusinessConnection::getUser() const {
    return m_user;
}
void OAIBusinessConnection::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIBusinessConnection::is_user_Set() const{
    return m_user_isSet;
}

bool OAIBusinessConnection::is_user_Valid() const{
    return m_user_isValid;
}

qint32 OAIBusinessConnection::getUserChatId() const {
    return m_user_chat_id;
}
void OAIBusinessConnection::setUserChatId(const qint32 &user_chat_id) {
    m_user_chat_id = user_chat_id;
    m_user_chat_id_isSet = true;
}

bool OAIBusinessConnection::is_user_chat_id_Set() const{
    return m_user_chat_id_isSet;
}

bool OAIBusinessConnection::is_user_chat_id_Valid() const{
    return m_user_chat_id_isValid;
}

qint32 OAIBusinessConnection::getDate() const {
    return m_date;
}
void OAIBusinessConnection::setDate(const qint32 &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAIBusinessConnection::is_date_Set() const{
    return m_date_isSet;
}

bool OAIBusinessConnection::is_date_Valid() const{
    return m_date_isValid;
}

bool OAIBusinessConnection::isIsEnabled() const {
    return m_is_enabled;
}
void OAIBusinessConnection::setIsEnabled(const bool &is_enabled) {
    m_is_enabled = is_enabled;
    m_is_enabled_isSet = true;
}

bool OAIBusinessConnection::is_is_enabled_Set() const{
    return m_is_enabled_isSet;
}

bool OAIBusinessConnection::is_is_enabled_Valid() const{
    return m_is_enabled_isValid;
}

OAIBusinessBotRights OAIBusinessConnection::getRights() const {
    return m_rights;
}
void OAIBusinessConnection::setRights(const OAIBusinessBotRights &rights) {
    m_rights = rights;
    m_rights_isSet = true;
}

bool OAIBusinessConnection::is_rights_Set() const{
    return m_rights_isSet;
}

bool OAIBusinessConnection::is_rights_Valid() const{
    return m_rights_isValid;
}

bool OAIBusinessConnection::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_chat_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rights.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBusinessConnection::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_user_isValid && m_user_chat_id_isValid && m_date_isValid && m_is_enabled_isValid && true;
}

} // namespace tele_rest
