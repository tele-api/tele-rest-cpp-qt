/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIRestrictChatMemberRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIRestrictChatMemberRequest::OAIRestrictChatMemberRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRestrictChatMemberRequest::OAIRestrictChatMemberRequest() {
    this->initializeModel();
}

OAIRestrictChatMemberRequest::~OAIRestrictChatMemberRequest() {}

void OAIRestrictChatMemberRequest::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;

    m_use_independent_chat_permissions_isSet = false;
    m_use_independent_chat_permissions_isValid = false;

    m_until_date_isSet = false;
    m_until_date_isValid = false;
}

void OAIRestrictChatMemberRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRestrictChatMemberRequest::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_permissions_isValid = ::tele_rest::fromJsonValue(m_permissions, json[QString("permissions")]);
    m_permissions_isSet = !json[QString("permissions")].isNull() && m_permissions_isValid;

    m_use_independent_chat_permissions_isValid = ::tele_rest::fromJsonValue(m_use_independent_chat_permissions, json[QString("use_independent_chat_permissions")]);
    m_use_independent_chat_permissions_isSet = !json[QString("use_independent_chat_permissions")].isNull() && m_use_independent_chat_permissions_isValid;

    m_until_date_isValid = ::tele_rest::fromJsonValue(m_until_date, json[QString("until_date")]);
    m_until_date_isSet = !json[QString("until_date")].isNull() && m_until_date_isValid;
}

QString OAIRestrictChatMemberRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRestrictChatMemberRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_permissions.isSet()) {
        obj.insert(QString("permissions"), ::tele_rest::toJsonValue(m_permissions));
    }
    if (m_use_independent_chat_permissions_isSet) {
        obj.insert(QString("use_independent_chat_permissions"), ::tele_rest::toJsonValue(m_use_independent_chat_permissions));
    }
    if (m_until_date_isSet) {
        obj.insert(QString("until_date"), ::tele_rest::toJsonValue(m_until_date));
    }
    return obj;
}

OAIBotCommandScopeChat_chat_id OAIRestrictChatMemberRequest::getChatId() const {
    return m_chat_id;
}
void OAIRestrictChatMemberRequest::setChatId(const OAIBotCommandScopeChat_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIRestrictChatMemberRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIRestrictChatMemberRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAIRestrictChatMemberRequest::getUserId() const {
    return m_user_id;
}
void OAIRestrictChatMemberRequest::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIRestrictChatMemberRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIRestrictChatMemberRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

OAIChatPermissions OAIRestrictChatMemberRequest::getPermissions() const {
    return m_permissions;
}
void OAIRestrictChatMemberRequest::setPermissions(const OAIChatPermissions &permissions) {
    m_permissions = permissions;
    m_permissions_isSet = true;
}

bool OAIRestrictChatMemberRequest::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAIRestrictChatMemberRequest::is_permissions_Valid() const{
    return m_permissions_isValid;
}

bool OAIRestrictChatMemberRequest::isUseIndependentChatPermissions() const {
    return m_use_independent_chat_permissions;
}
void OAIRestrictChatMemberRequest::setUseIndependentChatPermissions(const bool &use_independent_chat_permissions) {
    m_use_independent_chat_permissions = use_independent_chat_permissions;
    m_use_independent_chat_permissions_isSet = true;
}

bool OAIRestrictChatMemberRequest::is_use_independent_chat_permissions_Set() const{
    return m_use_independent_chat_permissions_isSet;
}

bool OAIRestrictChatMemberRequest::is_use_independent_chat_permissions_Valid() const{
    return m_use_independent_chat_permissions_isValid;
}

qint32 OAIRestrictChatMemberRequest::getUntilDate() const {
    return m_until_date;
}
void OAIRestrictChatMemberRequest::setUntilDate(const qint32 &until_date) {
    m_until_date = until_date;
    m_until_date_isSet = true;
}

bool OAIRestrictChatMemberRequest::is_until_date_Set() const{
    return m_until_date_isSet;
}

bool OAIRestrictChatMemberRequest::is_until_date_Valid() const{
    return m_until_date_isValid;
}

bool OAIRestrictChatMemberRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_permissions.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_use_independent_chat_permissions_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_until_date_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRestrictChatMemberRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_user_id_isValid && m_permissions_isValid && true;
}

} // namespace tele_rest
