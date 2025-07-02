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

#include "OAIInlineQueryResultArticle.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineQueryResultArticle::OAIInlineQueryResultArticle(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineQueryResultArticle::OAIInlineQueryResultArticle() {
    this->initializeModel();
}

OAIInlineQueryResultArticle::~OAIInlineQueryResultArticle() {}

void OAIInlineQueryResultArticle::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_input_message_content_isSet = false;
    m_input_message_content_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_thumbnail_url_isSet = false;
    m_thumbnail_url_isValid = false;

    m_thumbnail_width_isSet = false;
    m_thumbnail_width_isValid = false;

    m_thumbnail_height_isSet = false;
    m_thumbnail_height_isValid = false;
}

void OAIInlineQueryResultArticle::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineQueryResultArticle::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_input_message_content_isValid = ::tele_rest::fromJsonValue(m_input_message_content, json[QString("input_message_content")]);
    m_input_message_content_isSet = !json[QString("input_message_content")].isNull() && m_input_message_content_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_thumbnail_url_isValid = ::tele_rest::fromJsonValue(m_thumbnail_url, json[QString("thumbnail_url")]);
    m_thumbnail_url_isSet = !json[QString("thumbnail_url")].isNull() && m_thumbnail_url_isValid;

    m_thumbnail_width_isValid = ::tele_rest::fromJsonValue(m_thumbnail_width, json[QString("thumbnail_width")]);
    m_thumbnail_width_isSet = !json[QString("thumbnail_width")].isNull() && m_thumbnail_width_isValid;

    m_thumbnail_height_isValid = ::tele_rest::fromJsonValue(m_thumbnail_height, json[QString("thumbnail_height")]);
    m_thumbnail_height_isSet = !json[QString("thumbnail_height")].isNull() && m_thumbnail_height_isValid;
}

QString OAIInlineQueryResultArticle::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineQueryResultArticle::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_input_message_content.isSet()) {
        obj.insert(QString("input_message_content"), ::tele_rest::toJsonValue(m_input_message_content));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
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

QString OAIInlineQueryResultArticle::getType() const {
    return m_type;
}
void OAIInlineQueryResultArticle::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInlineQueryResultArticle::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInlineQueryResultArticle::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInlineQueryResultArticle::getId() const {
    return m_id;
}
void OAIInlineQueryResultArticle::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInlineQueryResultArticle::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInlineQueryResultArticle::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInlineQueryResultArticle::getTitle() const {
    return m_title;
}
void OAIInlineQueryResultArticle::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIInlineQueryResultArticle::is_title_Set() const{
    return m_title_isSet;
}

bool OAIInlineQueryResultArticle::is_title_Valid() const{
    return m_title_isValid;
}

OAIInputMessageContent OAIInlineQueryResultArticle::getInputMessageContent() const {
    return m_input_message_content;
}
void OAIInlineQueryResultArticle::setInputMessageContent(const OAIInputMessageContent &input_message_content) {
    m_input_message_content = input_message_content;
    m_input_message_content_isSet = true;
}

bool OAIInlineQueryResultArticle::is_input_message_content_Set() const{
    return m_input_message_content_isSet;
}

bool OAIInlineQueryResultArticle::is_input_message_content_Valid() const{
    return m_input_message_content_isValid;
}

OAIInlineKeyboardMarkup OAIInlineQueryResultArticle::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIInlineQueryResultArticle::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIInlineQueryResultArticle::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIInlineQueryResultArticle::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

QString OAIInlineQueryResultArticle::getUrl() const {
    return m_url;
}
void OAIInlineQueryResultArticle::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIInlineQueryResultArticle::is_url_Set() const{
    return m_url_isSet;
}

bool OAIInlineQueryResultArticle::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIInlineQueryResultArticle::getDescription() const {
    return m_description;
}
void OAIInlineQueryResultArticle::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIInlineQueryResultArticle::is_description_Set() const{
    return m_description_isSet;
}

bool OAIInlineQueryResultArticle::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIInlineQueryResultArticle::getThumbnailUrl() const {
    return m_thumbnail_url;
}
void OAIInlineQueryResultArticle::setThumbnailUrl(const QString &thumbnail_url) {
    m_thumbnail_url = thumbnail_url;
    m_thumbnail_url_isSet = true;
}

bool OAIInlineQueryResultArticle::is_thumbnail_url_Set() const{
    return m_thumbnail_url_isSet;
}

bool OAIInlineQueryResultArticle::is_thumbnail_url_Valid() const{
    return m_thumbnail_url_isValid;
}

qint32 OAIInlineQueryResultArticle::getThumbnailWidth() const {
    return m_thumbnail_width;
}
void OAIInlineQueryResultArticle::setThumbnailWidth(const qint32 &thumbnail_width) {
    m_thumbnail_width = thumbnail_width;
    m_thumbnail_width_isSet = true;
}

bool OAIInlineQueryResultArticle::is_thumbnail_width_Set() const{
    return m_thumbnail_width_isSet;
}

bool OAIInlineQueryResultArticle::is_thumbnail_width_Valid() const{
    return m_thumbnail_width_isValid;
}

qint32 OAIInlineQueryResultArticle::getThumbnailHeight() const {
    return m_thumbnail_height;
}
void OAIInlineQueryResultArticle::setThumbnailHeight(const qint32 &thumbnail_height) {
    m_thumbnail_height = thumbnail_height;
    m_thumbnail_height_isSet = true;
}

bool OAIInlineQueryResultArticle::is_thumbnail_height_Set() const{
    return m_thumbnail_height_isSet;
}

bool OAIInlineQueryResultArticle::is_thumbnail_height_Valid() const{
    return m_thumbnail_height_isValid;
}

bool OAIInlineQueryResultArticle::isSet() const {
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

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_input_message_content.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
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

bool OAIInlineQueryResultArticle::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_title_isValid && m_input_message_content_isValid && true;
}

} // namespace tele_rest
