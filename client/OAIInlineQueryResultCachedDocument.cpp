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

#include "OAIInlineQueryResultCachedDocument.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineQueryResultCachedDocument::OAIInlineQueryResultCachedDocument(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineQueryResultCachedDocument::OAIInlineQueryResultCachedDocument() {
    this->initializeModel();
}

OAIInlineQueryResultCachedDocument::~OAIInlineQueryResultCachedDocument() {}

void OAIInlineQueryResultCachedDocument::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_document_file_id_isSet = false;
    m_document_file_id_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;

    m_input_message_content_isSet = false;
    m_input_message_content_isValid = false;
}

void OAIInlineQueryResultCachedDocument::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineQueryResultCachedDocument::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_document_file_id_isValid = ::tele_rest::fromJsonValue(m_document_file_id, json[QString("document_file_id")]);
    m_document_file_id_isSet = !json[QString("document_file_id")].isNull() && m_document_file_id_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;

    m_input_message_content_isValid = ::tele_rest::fromJsonValue(m_input_message_content, json[QString("input_message_content")]);
    m_input_message_content_isSet = !json[QString("input_message_content")].isNull() && m_input_message_content_isValid;
}

QString OAIInlineQueryResultCachedDocument::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineQueryResultCachedDocument::asJsonObject() const {
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
    if (m_document_file_id_isSet) {
        obj.insert(QString("document_file_id"), ::tele_rest::toJsonValue(m_document_file_id));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
    }
    if (m_caption_isSet) {
        obj.insert(QString("caption"), ::tele_rest::toJsonValue(m_caption));
    }
    if (m_parse_mode_isSet) {
        obj.insert(QString("parse_mode"), ::tele_rest::toJsonValue(m_parse_mode));
    }
    if (m_caption_entities.size() > 0) {
        obj.insert(QString("caption_entities"), ::tele_rest::toJsonValue(m_caption_entities));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    if (m_input_message_content.isSet()) {
        obj.insert(QString("input_message_content"), ::tele_rest::toJsonValue(m_input_message_content));
    }
    return obj;
}

QString OAIInlineQueryResultCachedDocument::getType() const {
    return m_type;
}
void OAIInlineQueryResultCachedDocument::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInlineQueryResultCachedDocument::getId() const {
    return m_id;
}
void OAIInlineQueryResultCachedDocument::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInlineQueryResultCachedDocument::getTitle() const {
    return m_title;
}
void OAIInlineQueryResultCachedDocument::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_title_Set() const{
    return m_title_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIInlineQueryResultCachedDocument::getDocumentFileId() const {
    return m_document_file_id;
}
void OAIInlineQueryResultCachedDocument::setDocumentFileId(const QString &document_file_id) {
    m_document_file_id = document_file_id;
    m_document_file_id_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_document_file_id_Set() const{
    return m_document_file_id_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_document_file_id_Valid() const{
    return m_document_file_id_isValid;
}

QString OAIInlineQueryResultCachedDocument::getDescription() const {
    return m_description;
}
void OAIInlineQueryResultCachedDocument::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_description_Set() const{
    return m_description_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIInlineQueryResultCachedDocument::getCaption() const {
    return m_caption;
}
void OAIInlineQueryResultCachedDocument::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAIInlineQueryResultCachedDocument::getParseMode() const {
    return m_parse_mode;
}
void OAIInlineQueryResultCachedDocument::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIInlineQueryResultCachedDocument::getCaptionEntities() const {
    return m_caption_entities;
}
void OAIInlineQueryResultCachedDocument::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

OAIInlineKeyboardMarkup OAIInlineQueryResultCachedDocument::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIInlineQueryResultCachedDocument::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

OAIInputMessageContent OAIInlineQueryResultCachedDocument::getInputMessageContent() const {
    return m_input_message_content;
}
void OAIInlineQueryResultCachedDocument::setInputMessageContent(const OAIInputMessageContent &input_message_content) {
    m_input_message_content = input_message_content;
    m_input_message_content_isSet = true;
}

bool OAIInlineQueryResultCachedDocument::is_input_message_content_Set() const{
    return m_input_message_content_isSet;
}

bool OAIInlineQueryResultCachedDocument::is_input_message_content_Valid() const{
    return m_input_message_content_isValid;
}

bool OAIInlineQueryResultCachedDocument::isSet() const {
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

        if (m_document_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_caption_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_caption_entities.size() > 0) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIInlineQueryResultCachedDocument::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_title_isValid && m_document_file_id_isValid && true;
}

} // namespace tele_rest
