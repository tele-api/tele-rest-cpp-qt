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

#include "OAIInlineQueryResultContact.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineQueryResultContact::OAIInlineQueryResultContact(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineQueryResultContact::OAIInlineQueryResultContact() {
    this->initializeModel();
}

OAIInlineQueryResultContact::~OAIInlineQueryResultContact() {}

void OAIInlineQueryResultContact::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_phone_number_isSet = false;
    m_phone_number_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_vcard_isSet = false;
    m_vcard_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;

    m_input_message_content_isSet = false;
    m_input_message_content_isValid = false;

    m_thumbnail_url_isSet = false;
    m_thumbnail_url_isValid = false;

    m_thumbnail_width_isSet = false;
    m_thumbnail_width_isValid = false;

    m_thumbnail_height_isSet = false;
    m_thumbnail_height_isValid = false;
}

void OAIInlineQueryResultContact::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineQueryResultContact::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_phone_number_isValid = ::tele_rest::fromJsonValue(m_phone_number, json[QString("phone_number")]);
    m_phone_number_isSet = !json[QString("phone_number")].isNull() && m_phone_number_isValid;

    m_first_name_isValid = ::tele_rest::fromJsonValue(m_first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_last_name_isValid = ::tele_rest::fromJsonValue(m_last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_vcard_isValid = ::tele_rest::fromJsonValue(m_vcard, json[QString("vcard")]);
    m_vcard_isSet = !json[QString("vcard")].isNull() && m_vcard_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;

    m_input_message_content_isValid = ::tele_rest::fromJsonValue(m_input_message_content, json[QString("input_message_content")]);
    m_input_message_content_isSet = !json[QString("input_message_content")].isNull() && m_input_message_content_isValid;

    m_thumbnail_url_isValid = ::tele_rest::fromJsonValue(m_thumbnail_url, json[QString("thumbnail_url")]);
    m_thumbnail_url_isSet = !json[QString("thumbnail_url")].isNull() && m_thumbnail_url_isValid;

    m_thumbnail_width_isValid = ::tele_rest::fromJsonValue(m_thumbnail_width, json[QString("thumbnail_width")]);
    m_thumbnail_width_isSet = !json[QString("thumbnail_width")].isNull() && m_thumbnail_width_isValid;

    m_thumbnail_height_isValid = ::tele_rest::fromJsonValue(m_thumbnail_height, json[QString("thumbnail_height")]);
    m_thumbnail_height_isSet = !json[QString("thumbnail_height")].isNull() && m_thumbnail_height_isValid;
}

QString OAIInlineQueryResultContact::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineQueryResultContact::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_phone_number_isSet) {
        obj.insert(QString("phone_number"), ::tele_rest::toJsonValue(m_phone_number));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::tele_rest::toJsonValue(m_first_name));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::tele_rest::toJsonValue(m_last_name));
    }
    if (m_vcard_isSet) {
        obj.insert(QString("vcard"), ::tele_rest::toJsonValue(m_vcard));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    if (m_input_message_content.isSet()) {
        obj.insert(QString("input_message_content"), ::tele_rest::toJsonValue(m_input_message_content));
    }
    if (m_thumbnail_url_isSet) {
        obj.insert(QString("thumbnail_url"), ::tele_rest::toJsonValue(m_thumbnail_url));
    }
    if (m_thumbnail_width_isSet) {
        obj.insert(QString("thumbnail_width"), ::tele_rest::toJsonValue(m_thumbnail_width));
    }
    if (m_thumbnail_height_isSet) {
        obj.insert(QString("thumbnail_height"), ::tele_rest::toJsonValue(m_thumbnail_height));
    }
    return obj;
}

QString OAIInlineQueryResultContact::getType() const {
    return m_type;
}
void OAIInlineQueryResultContact::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInlineQueryResultContact::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInlineQueryResultContact::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInlineQueryResultContact::getId() const {
    return m_id;
}
void OAIInlineQueryResultContact::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInlineQueryResultContact::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInlineQueryResultContact::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInlineQueryResultContact::getPhoneNumber() const {
    return m_phone_number;
}
void OAIInlineQueryResultContact::setPhoneNumber(const QString &phone_number) {
    m_phone_number = phone_number;
    m_phone_number_isSet = true;
}

bool OAIInlineQueryResultContact::is_phone_number_Set() const{
    return m_phone_number_isSet;
}

bool OAIInlineQueryResultContact::is_phone_number_Valid() const{
    return m_phone_number_isValid;
}

QString OAIInlineQueryResultContact::getFirstName() const {
    return m_first_name;
}
void OAIInlineQueryResultContact::setFirstName(const QString &first_name) {
    m_first_name = first_name;
    m_first_name_isSet = true;
}

bool OAIInlineQueryResultContact::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAIInlineQueryResultContact::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAIInlineQueryResultContact::getLastName() const {
    return m_last_name;
}
void OAIInlineQueryResultContact::setLastName(const QString &last_name) {
    m_last_name = last_name;
    m_last_name_isSet = true;
}

bool OAIInlineQueryResultContact::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAIInlineQueryResultContact::is_last_name_Valid() const{
    return m_last_name_isValid;
}

QString OAIInlineQueryResultContact::getVcard() const {
    return m_vcard;
}
void OAIInlineQueryResultContact::setVcard(const QString &vcard) {
    m_vcard = vcard;
    m_vcard_isSet = true;
}

bool OAIInlineQueryResultContact::is_vcard_Set() const{
    return m_vcard_isSet;
}

bool OAIInlineQueryResultContact::is_vcard_Valid() const{
    return m_vcard_isValid;
}

OAIInlineKeyboardMarkup OAIInlineQueryResultContact::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIInlineQueryResultContact::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIInlineQueryResultContact::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIInlineQueryResultContact::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

OAIInputMessageContent OAIInlineQueryResultContact::getInputMessageContent() const {
    return m_input_message_content;
}
void OAIInlineQueryResultContact::setInputMessageContent(const OAIInputMessageContent &input_message_content) {
    m_input_message_content = input_message_content;
    m_input_message_content_isSet = true;
}

bool OAIInlineQueryResultContact::is_input_message_content_Set() const{
    return m_input_message_content_isSet;
}

bool OAIInlineQueryResultContact::is_input_message_content_Valid() const{
    return m_input_message_content_isValid;
}

QString OAIInlineQueryResultContact::getThumbnailUrl() const {
    return m_thumbnail_url;
}
void OAIInlineQueryResultContact::setThumbnailUrl(const QString &thumbnail_url) {
    m_thumbnail_url = thumbnail_url;
    m_thumbnail_url_isSet = true;
}

bool OAIInlineQueryResultContact::is_thumbnail_url_Set() const{
    return m_thumbnail_url_isSet;
}

bool OAIInlineQueryResultContact::is_thumbnail_url_Valid() const{
    return m_thumbnail_url_isValid;
}

qint32 OAIInlineQueryResultContact::getThumbnailWidth() const {
    return m_thumbnail_width;
}
void OAIInlineQueryResultContact::setThumbnailWidth(const qint32 &thumbnail_width) {
    m_thumbnail_width = thumbnail_width;
    m_thumbnail_width_isSet = true;
}

bool OAIInlineQueryResultContact::is_thumbnail_width_Set() const{
    return m_thumbnail_width_isSet;
}

bool OAIInlineQueryResultContact::is_thumbnail_width_Valid() const{
    return m_thumbnail_width_isValid;
}

qint32 OAIInlineQueryResultContact::getThumbnailHeight() const {
    return m_thumbnail_height;
}
void OAIInlineQueryResultContact::setThumbnailHeight(const qint32 &thumbnail_height) {
    m_thumbnail_height = thumbnail_height;
    m_thumbnail_height_isSet = true;
}

bool OAIInlineQueryResultContact::is_thumbnail_height_Set() const{
    return m_thumbnail_height_isSet;
}

bool OAIInlineQueryResultContact::is_thumbnail_height_Valid() const{
    return m_thumbnail_height_isValid;
}

bool OAIInlineQueryResultContact::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vcard_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_input_message_content.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_height_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInlineQueryResultContact::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_phone_number_isValid && m_first_name_isValid && true;
}

} // namespace tele_rest
