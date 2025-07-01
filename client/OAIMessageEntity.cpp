/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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

#include "OAIMessageEntity.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIMessageEntity::OAIMessageEntity(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageEntity::OAIMessageEntity() {
    this->initializeModel();
}

OAIMessageEntity::~OAIMessageEntity() {}

void OAIMessageEntity::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_offset_isSet = false;
    m_offset_isValid = false;

    m_length_isSet = false;
    m_length_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_language_isSet = false;
    m_language_isValid = false;

    m_custom_emoji_id_isSet = false;
    m_custom_emoji_id_isValid = false;
}

void OAIMessageEntity::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageEntity::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_offset_isValid = ::tele_rest::fromJsonValue(m_offset, json[QString("offset")]);
    m_offset_isSet = !json[QString("offset")].isNull() && m_offset_isValid;

    m_length_isValid = ::tele_rest::fromJsonValue(m_length, json[QString("length")]);
    m_length_isSet = !json[QString("length")].isNull() && m_length_isValid;

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_language_isValid = ::tele_rest::fromJsonValue(m_language, json[QString("language")]);
    m_language_isSet = !json[QString("language")].isNull() && m_language_isValid;

    m_custom_emoji_id_isValid = ::tele_rest::fromJsonValue(m_custom_emoji_id, json[QString("custom_emoji_id")]);
    m_custom_emoji_id_isSet = !json[QString("custom_emoji_id")].isNull() && m_custom_emoji_id_isValid;
}

QString OAIMessageEntity::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageEntity::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_offset_isSet) {
        obj.insert(QString("offset"), ::tele_rest::toJsonValue(m_offset));
    }
    if (m_length_isSet) {
        obj.insert(QString("length"), ::tele_rest::toJsonValue(m_length));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_language_isSet) {
        obj.insert(QString("language"), ::tele_rest::toJsonValue(m_language));
    }
    if (m_custom_emoji_id_isSet) {
        obj.insert(QString("custom_emoji_id"), ::tele_rest::toJsonValue(m_custom_emoji_id));
    }
    return obj;
}

QString OAIMessageEntity::getType() const {
    return m_type;
}
void OAIMessageEntity::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIMessageEntity::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMessageEntity::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIMessageEntity::getOffset() const {
    return m_offset;
}
void OAIMessageEntity::setOffset(const qint32 &offset) {
    m_offset = offset;
    m_offset_isSet = true;
}

bool OAIMessageEntity::is_offset_Set() const{
    return m_offset_isSet;
}

bool OAIMessageEntity::is_offset_Valid() const{
    return m_offset_isValid;
}

qint32 OAIMessageEntity::getLength() const {
    return m_length;
}
void OAIMessageEntity::setLength(const qint32 &length) {
    m_length = length;
    m_length_isSet = true;
}

bool OAIMessageEntity::is_length_Set() const{
    return m_length_isSet;
}

bool OAIMessageEntity::is_length_Valid() const{
    return m_length_isValid;
}

QString OAIMessageEntity::getUrl() const {
    return m_url;
}
void OAIMessageEntity::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIMessageEntity::is_url_Set() const{
    return m_url_isSet;
}

bool OAIMessageEntity::is_url_Valid() const{
    return m_url_isValid;
}

OAIUser OAIMessageEntity::getUser() const {
    return m_user;
}
void OAIMessageEntity::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIMessageEntity::is_user_Set() const{
    return m_user_isSet;
}

bool OAIMessageEntity::is_user_Valid() const{
    return m_user_isValid;
}

QString OAIMessageEntity::getLanguage() const {
    return m_language;
}
void OAIMessageEntity::setLanguage(const QString &language) {
    m_language = language;
    m_language_isSet = true;
}

bool OAIMessageEntity::is_language_Set() const{
    return m_language_isSet;
}

bool OAIMessageEntity::is_language_Valid() const{
    return m_language_isValid;
}

QString OAIMessageEntity::getCustomEmojiId() const {
    return m_custom_emoji_id;
}
void OAIMessageEntity::setCustomEmojiId(const QString &custom_emoji_id) {
    m_custom_emoji_id = custom_emoji_id;
    m_custom_emoji_id_isSet = true;
}

bool OAIMessageEntity::is_custom_emoji_id_Set() const{
    return m_custom_emoji_id_isSet;
}

bool OAIMessageEntity::is_custom_emoji_id_Valid() const{
    return m_custom_emoji_id_isValid;
}

bool OAIMessageEntity::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_offset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_length_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_language_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_emoji_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageEntity::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_offset_isValid && m_length_isValid && true;
}

} // namespace tele_rest
