/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAISwitchInlineQueryChosenChat.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISwitchInlineQueryChosenChat::OAISwitchInlineQueryChosenChat(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISwitchInlineQueryChosenChat::OAISwitchInlineQueryChosenChat() {
    this->initializeModel();
}

OAISwitchInlineQueryChosenChat::~OAISwitchInlineQueryChosenChat() {}

void OAISwitchInlineQueryChosenChat::initializeModel() {

    m_query_isSet = false;
    m_query_isValid = false;

    m_allow_user_chats_isSet = false;
    m_allow_user_chats_isValid = false;

    m_allow_bot_chats_isSet = false;
    m_allow_bot_chats_isValid = false;

    m_allow_group_chats_isSet = false;
    m_allow_group_chats_isValid = false;

    m_allow_channel_chats_isSet = false;
    m_allow_channel_chats_isValid = false;
}

void OAISwitchInlineQueryChosenChat::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISwitchInlineQueryChosenChat::fromJsonObject(QJsonObject json) {

    m_query_isValid = ::tele_rest::fromJsonValue(m_query, json[QString("query")]);
    m_query_isSet = !json[QString("query")].isNull() && m_query_isValid;

    m_allow_user_chats_isValid = ::tele_rest::fromJsonValue(m_allow_user_chats, json[QString("allow_user_chats")]);
    m_allow_user_chats_isSet = !json[QString("allow_user_chats")].isNull() && m_allow_user_chats_isValid;

    m_allow_bot_chats_isValid = ::tele_rest::fromJsonValue(m_allow_bot_chats, json[QString("allow_bot_chats")]);
    m_allow_bot_chats_isSet = !json[QString("allow_bot_chats")].isNull() && m_allow_bot_chats_isValid;

    m_allow_group_chats_isValid = ::tele_rest::fromJsonValue(m_allow_group_chats, json[QString("allow_group_chats")]);
    m_allow_group_chats_isSet = !json[QString("allow_group_chats")].isNull() && m_allow_group_chats_isValid;

    m_allow_channel_chats_isValid = ::tele_rest::fromJsonValue(m_allow_channel_chats, json[QString("allow_channel_chats")]);
    m_allow_channel_chats_isSet = !json[QString("allow_channel_chats")].isNull() && m_allow_channel_chats_isValid;
}

QString OAISwitchInlineQueryChosenChat::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISwitchInlineQueryChosenChat::asJsonObject() const {
    QJsonObject obj;
    if (m_query_isSet) {
        obj.insert(QString("query"), ::tele_rest::toJsonValue(m_query));
    }
    if (m_allow_user_chats_isSet) {
        obj.insert(QString("allow_user_chats"), ::tele_rest::toJsonValue(m_allow_user_chats));
    }
    if (m_allow_bot_chats_isSet) {
        obj.insert(QString("allow_bot_chats"), ::tele_rest::toJsonValue(m_allow_bot_chats));
    }
    if (m_allow_group_chats_isSet) {
        obj.insert(QString("allow_group_chats"), ::tele_rest::toJsonValue(m_allow_group_chats));
    }
    if (m_allow_channel_chats_isSet) {
        obj.insert(QString("allow_channel_chats"), ::tele_rest::toJsonValue(m_allow_channel_chats));
    }
    return obj;
}

QString OAISwitchInlineQueryChosenChat::getQuery() const {
    return m_query;
}
void OAISwitchInlineQueryChosenChat::setQuery(const QString &query) {
    m_query = query;
    m_query_isSet = true;
}

bool OAISwitchInlineQueryChosenChat::is_query_Set() const{
    return m_query_isSet;
}

bool OAISwitchInlineQueryChosenChat::is_query_Valid() const{
    return m_query_isValid;
}

bool OAISwitchInlineQueryChosenChat::isAllowUserChats() const {
    return m_allow_user_chats;
}
void OAISwitchInlineQueryChosenChat::setAllowUserChats(const bool &allow_user_chats) {
    m_allow_user_chats = allow_user_chats;
    m_allow_user_chats_isSet = true;
}

bool OAISwitchInlineQueryChosenChat::is_allow_user_chats_Set() const{
    return m_allow_user_chats_isSet;
}

bool OAISwitchInlineQueryChosenChat::is_allow_user_chats_Valid() const{
    return m_allow_user_chats_isValid;
}

bool OAISwitchInlineQueryChosenChat::isAllowBotChats() const {
    return m_allow_bot_chats;
}
void OAISwitchInlineQueryChosenChat::setAllowBotChats(const bool &allow_bot_chats) {
    m_allow_bot_chats = allow_bot_chats;
    m_allow_bot_chats_isSet = true;
}

bool OAISwitchInlineQueryChosenChat::is_allow_bot_chats_Set() const{
    return m_allow_bot_chats_isSet;
}

bool OAISwitchInlineQueryChosenChat::is_allow_bot_chats_Valid() const{
    return m_allow_bot_chats_isValid;
}

bool OAISwitchInlineQueryChosenChat::isAllowGroupChats() const {
    return m_allow_group_chats;
}
void OAISwitchInlineQueryChosenChat::setAllowGroupChats(const bool &allow_group_chats) {
    m_allow_group_chats = allow_group_chats;
    m_allow_group_chats_isSet = true;
}

bool OAISwitchInlineQueryChosenChat::is_allow_group_chats_Set() const{
    return m_allow_group_chats_isSet;
}

bool OAISwitchInlineQueryChosenChat::is_allow_group_chats_Valid() const{
    return m_allow_group_chats_isValid;
}

bool OAISwitchInlineQueryChosenChat::isAllowChannelChats() const {
    return m_allow_channel_chats;
}
void OAISwitchInlineQueryChosenChat::setAllowChannelChats(const bool &allow_channel_chats) {
    m_allow_channel_chats = allow_channel_chats;
    m_allow_channel_chats_isSet = true;
}

bool OAISwitchInlineQueryChosenChat::is_allow_channel_chats_Set() const{
    return m_allow_channel_chats_isSet;
}

bool OAISwitchInlineQueryChosenChat::is_allow_channel_chats_Valid() const{
    return m_allow_channel_chats_isValid;
}

bool OAISwitchInlineQueryChosenChat::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_query_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_user_chats_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_bot_chats_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_group_chats_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_channel_chats_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISwitchInlineQueryChosenChat::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
