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

#include "OAISavePreparedInlineMessageRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISavePreparedInlineMessageRequest::OAISavePreparedInlineMessageRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISavePreparedInlineMessageRequest::OAISavePreparedInlineMessageRequest() {
    this->initializeModel();
}

OAISavePreparedInlineMessageRequest::~OAISavePreparedInlineMessageRequest() {}

void OAISavePreparedInlineMessageRequest::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_result_isSet = false;
    m_result_isValid = false;

    m_allow_user_chats_isSet = false;
    m_allow_user_chats_isValid = false;

    m_allow_bot_chats_isSet = false;
    m_allow_bot_chats_isValid = false;

    m_allow_group_chats_isSet = false;
    m_allow_group_chats_isValid = false;

    m_allow_channel_chats_isSet = false;
    m_allow_channel_chats_isValid = false;
}

void OAISavePreparedInlineMessageRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISavePreparedInlineMessageRequest::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_result_isValid = ::tele_rest::fromJsonValue(m_result, json[QString("result")]);
    m_result_isSet = !json[QString("result")].isNull() && m_result_isValid;

    m_allow_user_chats_isValid = ::tele_rest::fromJsonValue(m_allow_user_chats, json[QString("allow_user_chats")]);
    m_allow_user_chats_isSet = !json[QString("allow_user_chats")].isNull() && m_allow_user_chats_isValid;

    m_allow_bot_chats_isValid = ::tele_rest::fromJsonValue(m_allow_bot_chats, json[QString("allow_bot_chats")]);
    m_allow_bot_chats_isSet = !json[QString("allow_bot_chats")].isNull() && m_allow_bot_chats_isValid;

    m_allow_group_chats_isValid = ::tele_rest::fromJsonValue(m_allow_group_chats, json[QString("allow_group_chats")]);
    m_allow_group_chats_isSet = !json[QString("allow_group_chats")].isNull() && m_allow_group_chats_isValid;

    m_allow_channel_chats_isValid = ::tele_rest::fromJsonValue(m_allow_channel_chats, json[QString("allow_channel_chats")]);
    m_allow_channel_chats_isSet = !json[QString("allow_channel_chats")].isNull() && m_allow_channel_chats_isValid;
}

QString OAISavePreparedInlineMessageRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISavePreparedInlineMessageRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_result.isSet()) {
        obj.insert(QString("result"), ::tele_rest::toJsonValue(m_result));
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

qint32 OAISavePreparedInlineMessageRequest::getUserId() const {
    return m_user_id;
}
void OAISavePreparedInlineMessageRequest::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAISavePreparedInlineMessageRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAISavePreparedInlineMessageRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

OAIInlineQueryResult OAISavePreparedInlineMessageRequest::getResult() const {
    return m_result;
}
void OAISavePreparedInlineMessageRequest::setResult(const OAIInlineQueryResult &result) {
    m_result = result;
    m_result_isSet = true;
}

bool OAISavePreparedInlineMessageRequest::is_result_Set() const{
    return m_result_isSet;
}

bool OAISavePreparedInlineMessageRequest::is_result_Valid() const{
    return m_result_isValid;
}

bool OAISavePreparedInlineMessageRequest::isAllowUserChats() const {
    return m_allow_user_chats;
}
void OAISavePreparedInlineMessageRequest::setAllowUserChats(const bool &allow_user_chats) {
    m_allow_user_chats = allow_user_chats;
    m_allow_user_chats_isSet = true;
}

bool OAISavePreparedInlineMessageRequest::is_allow_user_chats_Set() const{
    return m_allow_user_chats_isSet;
}

bool OAISavePreparedInlineMessageRequest::is_allow_user_chats_Valid() const{
    return m_allow_user_chats_isValid;
}

bool OAISavePreparedInlineMessageRequest::isAllowBotChats() const {
    return m_allow_bot_chats;
}
void OAISavePreparedInlineMessageRequest::setAllowBotChats(const bool &allow_bot_chats) {
    m_allow_bot_chats = allow_bot_chats;
    m_allow_bot_chats_isSet = true;
}

bool OAISavePreparedInlineMessageRequest::is_allow_bot_chats_Set() const{
    return m_allow_bot_chats_isSet;
}

bool OAISavePreparedInlineMessageRequest::is_allow_bot_chats_Valid() const{
    return m_allow_bot_chats_isValid;
}

bool OAISavePreparedInlineMessageRequest::isAllowGroupChats() const {
    return m_allow_group_chats;
}
void OAISavePreparedInlineMessageRequest::setAllowGroupChats(const bool &allow_group_chats) {
    m_allow_group_chats = allow_group_chats;
    m_allow_group_chats_isSet = true;
}

bool OAISavePreparedInlineMessageRequest::is_allow_group_chats_Set() const{
    return m_allow_group_chats_isSet;
}

bool OAISavePreparedInlineMessageRequest::is_allow_group_chats_Valid() const{
    return m_allow_group_chats_isValid;
}

bool OAISavePreparedInlineMessageRequest::isAllowChannelChats() const {
    return m_allow_channel_chats;
}
void OAISavePreparedInlineMessageRequest::setAllowChannelChats(const bool &allow_channel_chats) {
    m_allow_channel_chats = allow_channel_chats;
    m_allow_channel_chats_isSet = true;
}

bool OAISavePreparedInlineMessageRequest::is_allow_channel_chats_Set() const{
    return m_allow_channel_chats_isSet;
}

bool OAISavePreparedInlineMessageRequest::is_allow_channel_chats_Valid() const{
    return m_allow_channel_chats_isValid;
}

bool OAISavePreparedInlineMessageRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_result.isSet()) {
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

bool OAISavePreparedInlineMessageRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && m_result_isValid && true;
}

} // namespace tele_rest
