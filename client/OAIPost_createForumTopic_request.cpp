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

#include "OAIPost_createForumTopic_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPost_createForumTopic_request::OAIPost_createForumTopic_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPost_createForumTopic_request::OAIPost_createForumTopic_request() {
    this->initializeModel();
}

OAIPost_createForumTopic_request::~OAIPost_createForumTopic_request() {}

void OAIPost_createForumTopic_request::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_icon_color_isSet = false;
    m_icon_color_isValid = false;

    m_icon_custom_emoji_id_isSet = false;
    m_icon_custom_emoji_id_isValid = false;
}

void OAIPost_createForumTopic_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPost_createForumTopic_request::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_name_isValid = ::tele_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_icon_color_isValid = ::tele_rest::fromJsonValue(m_icon_color, json[QString("icon_color")]);
    m_icon_color_isSet = !json[QString("icon_color")].isNull() && m_icon_color_isValid;

    m_icon_custom_emoji_id_isValid = ::tele_rest::fromJsonValue(m_icon_custom_emoji_id, json[QString("icon_custom_emoji_id")]);
    m_icon_custom_emoji_id_isSet = !json[QString("icon_custom_emoji_id")].isNull() && m_icon_custom_emoji_id_isValid;
}

QString OAIPost_createForumTopic_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPost_createForumTopic_request::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::tele_rest::toJsonValue(m_name));
    }
    if (m_icon_color_isSet) {
        obj.insert(QString("icon_color"), ::tele_rest::toJsonValue(m_icon_color));
    }
    if (m_icon_custom_emoji_id_isSet) {
        obj.insert(QString("icon_custom_emoji_id"), ::tele_rest::toJsonValue(m_icon_custom_emoji_id));
    }
    return obj;
}

OAIPost_restrictChatMember_request_chat_id OAIPost_createForumTopic_request::getChatId() const {
    return m_chat_id;
}
void OAIPost_createForumTopic_request::setChatId(const OAIPost_restrictChatMember_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIPost_createForumTopic_request::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIPost_createForumTopic_request::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

QString OAIPost_createForumTopic_request::getName() const {
    return m_name;
}
void OAIPost_createForumTopic_request::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIPost_createForumTopic_request::is_name_Set() const{
    return m_name_isSet;
}

bool OAIPost_createForumTopic_request::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIPost_createForumTopic_request::getIconColor() const {
    return m_icon_color;
}
void OAIPost_createForumTopic_request::setIconColor(const qint32 &icon_color) {
    m_icon_color = icon_color;
    m_icon_color_isSet = true;
}

bool OAIPost_createForumTopic_request::is_icon_color_Set() const{
    return m_icon_color_isSet;
}

bool OAIPost_createForumTopic_request::is_icon_color_Valid() const{
    return m_icon_color_isValid;
}

QString OAIPost_createForumTopic_request::getIconCustomEmojiId() const {
    return m_icon_custom_emoji_id;
}
void OAIPost_createForumTopic_request::setIconCustomEmojiId(const QString &icon_custom_emoji_id) {
    m_icon_custom_emoji_id = icon_custom_emoji_id;
    m_icon_custom_emoji_id_isSet = true;
}

bool OAIPost_createForumTopic_request::is_icon_custom_emoji_id_Set() const{
    return m_icon_custom_emoji_id_isSet;
}

bool OAIPost_createForumTopic_request::is_icon_custom_emoji_id_Valid() const{
    return m_icon_custom_emoji_id_isValid;
}

bool OAIPost_createForumTopic_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_custom_emoji_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPost_createForumTopic_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_name_isValid && true;
}

} // namespace tele_rest
