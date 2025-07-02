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

#include "OAIForumTopic.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIForumTopic::OAIForumTopic(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIForumTopic::OAIForumTopic() {
    this->initializeModel();
}

OAIForumTopic::~OAIForumTopic() {}

void OAIForumTopic::initializeModel() {

    m_message_thread_id_isSet = false;
    m_message_thread_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_icon_color_isSet = false;
    m_icon_color_isValid = false;

    m_icon_custom_emoji_id_isSet = false;
    m_icon_custom_emoji_id_isValid = false;
}

void OAIForumTopic::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIForumTopic::fromJsonObject(QJsonObject json) {

    m_message_thread_id_isValid = ::tele_rest::fromJsonValue(m_message_thread_id, json[QString("message_thread_id")]);
    m_message_thread_id_isSet = !json[QString("message_thread_id")].isNull() && m_message_thread_id_isValid;

    m_name_isValid = ::tele_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_icon_color_isValid = ::tele_rest::fromJsonValue(m_icon_color, json[QString("icon_color")]);
    m_icon_color_isSet = !json[QString("icon_color")].isNull() && m_icon_color_isValid;

    m_icon_custom_emoji_id_isValid = ::tele_rest::fromJsonValue(m_icon_custom_emoji_id, json[QString("icon_custom_emoji_id")]);
    m_icon_custom_emoji_id_isSet = !json[QString("icon_custom_emoji_id")].isNull() && m_icon_custom_emoji_id_isValid;
}

QString OAIForumTopic::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIForumTopic::asJsonObject() const {
    QJsonObject obj;
    if (m_message_thread_id_isSet) {
        obj.insert(QString("message_thread_id"), ::tele_rest::toJsonValue(m_message_thread_id));
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

qint32 OAIForumTopic::getMessageThreadId() const {
    return m_message_thread_id;
}
void OAIForumTopic::setMessageThreadId(const qint32 &message_thread_id) {
    m_message_thread_id = message_thread_id;
    m_message_thread_id_isSet = true;
}

bool OAIForumTopic::is_message_thread_id_Set() const{
    return m_message_thread_id_isSet;
}

bool OAIForumTopic::is_message_thread_id_Valid() const{
    return m_message_thread_id_isValid;
}

QString OAIForumTopic::getName() const {
    return m_name;
}
void OAIForumTopic::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIForumTopic::is_name_Set() const{
    return m_name_isSet;
}

bool OAIForumTopic::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIForumTopic::getIconColor() const {
    return m_icon_color;
}
void OAIForumTopic::setIconColor(const qint32 &icon_color) {
    m_icon_color = icon_color;
    m_icon_color_isSet = true;
}

bool OAIForumTopic::is_icon_color_Set() const{
    return m_icon_color_isSet;
}

bool OAIForumTopic::is_icon_color_Valid() const{
    return m_icon_color_isValid;
}

QString OAIForumTopic::getIconCustomEmojiId() const {
    return m_icon_custom_emoji_id;
}
void OAIForumTopic::setIconCustomEmojiId(const QString &icon_custom_emoji_id) {
    m_icon_custom_emoji_id = icon_custom_emoji_id;
    m_icon_custom_emoji_id_isSet = true;
}

bool OAIForumTopic::is_icon_custom_emoji_id_Set() const{
    return m_icon_custom_emoji_id_isSet;
}

bool OAIForumTopic::is_icon_custom_emoji_id_Valid() const{
    return m_icon_custom_emoji_id_isValid;
}

bool OAIForumTopic::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_message_thread_id_isSet) {
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

bool OAIForumTopic::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_message_thread_id_isValid && m_name_isValid && m_icon_color_isValid && true;
}

} // namespace tele_rest
