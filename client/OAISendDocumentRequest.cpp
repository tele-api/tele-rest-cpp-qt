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

#include "OAISendDocumentRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISendDocumentRequest::OAISendDocumentRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISendDocumentRequest::OAISendDocumentRequest() {
    this->initializeModel();
}

OAISendDocumentRequest::~OAISendDocumentRequest() {}

void OAISendDocumentRequest::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_document_isSet = false;
    m_document_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_message_thread_id_isSet = false;
    m_message_thread_id_isValid = false;

    m_thumbnail_isSet = false;
    m_thumbnail_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_disable_content_type_detection_isSet = false;
    m_disable_content_type_detection_isValid = false;

    m_disable_notification_isSet = false;
    m_disable_notification_isValid = false;

    m_protect_content_isSet = false;
    m_protect_content_isValid = false;

    m_allow_paid_broadcast_isSet = false;
    m_allow_paid_broadcast_isValid = false;

    m_message_effect_id_isSet = false;
    m_message_effect_id_isValid = false;

    m_reply_parameters_isSet = false;
    m_reply_parameters_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;
}

void OAISendDocumentRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISendDocumentRequest::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_document_isValid = ::tele_rest::fromJsonValue(m_document, json[QString("document")]);
    m_document_isSet = !json[QString("document")].isNull() && m_document_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_message_thread_id_isValid = ::tele_rest::fromJsonValue(m_message_thread_id, json[QString("message_thread_id")]);
    m_message_thread_id_isSet = !json[QString("message_thread_id")].isNull() && m_message_thread_id_isValid;

    m_thumbnail_isValid = ::tele_rest::fromJsonValue(m_thumbnail, json[QString("thumbnail")]);
    m_thumbnail_isSet = !json[QString("thumbnail")].isNull() && m_thumbnail_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_disable_content_type_detection_isValid = ::tele_rest::fromJsonValue(m_disable_content_type_detection, json[QString("disable_content_type_detection")]);
    m_disable_content_type_detection_isSet = !json[QString("disable_content_type_detection")].isNull() && m_disable_content_type_detection_isValid;

    m_disable_notification_isValid = ::tele_rest::fromJsonValue(m_disable_notification, json[QString("disable_notification")]);
    m_disable_notification_isSet = !json[QString("disable_notification")].isNull() && m_disable_notification_isValid;

    m_protect_content_isValid = ::tele_rest::fromJsonValue(m_protect_content, json[QString("protect_content")]);
    m_protect_content_isSet = !json[QString("protect_content")].isNull() && m_protect_content_isValid;

    m_allow_paid_broadcast_isValid = ::tele_rest::fromJsonValue(m_allow_paid_broadcast, json[QString("allow_paid_broadcast")]);
    m_allow_paid_broadcast_isSet = !json[QString("allow_paid_broadcast")].isNull() && m_allow_paid_broadcast_isValid;

    m_message_effect_id_isValid = ::tele_rest::fromJsonValue(m_message_effect_id, json[QString("message_effect_id")]);
    m_message_effect_id_isSet = !json[QString("message_effect_id")].isNull() && m_message_effect_id_isValid;

    m_reply_parameters_isValid = ::tele_rest::fromJsonValue(m_reply_parameters, json[QString("reply_parameters")]);
    m_reply_parameters_isSet = !json[QString("reply_parameters")].isNull() && m_reply_parameters_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;
}

QString OAISendDocumentRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISendDocumentRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_document_isSet) {
        obj.insert(QString("document"), ::tele_rest::toJsonValue(m_document));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_message_thread_id_isSet) {
        obj.insert(QString("message_thread_id"), ::tele_rest::toJsonValue(m_message_thread_id));
    }
    if (m_thumbnail_isSet) {
        obj.insert(QString("thumbnail"), ::tele_rest::toJsonValue(m_thumbnail));
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
    if (m_disable_content_type_detection_isSet) {
        obj.insert(QString("disable_content_type_detection"), ::tele_rest::toJsonValue(m_disable_content_type_detection));
    }
    if (m_disable_notification_isSet) {
        obj.insert(QString("disable_notification"), ::tele_rest::toJsonValue(m_disable_notification));
    }
    if (m_protect_content_isSet) {
        obj.insert(QString("protect_content"), ::tele_rest::toJsonValue(m_protect_content));
    }
    if (m_allow_paid_broadcast_isSet) {
        obj.insert(QString("allow_paid_broadcast"), ::tele_rest::toJsonValue(m_allow_paid_broadcast));
    }
    if (m_message_effect_id_isSet) {
        obj.insert(QString("message_effect_id"), ::tele_rest::toJsonValue(m_message_effect_id));
    }
    if (m_reply_parameters.isSet()) {
        obj.insert(QString("reply_parameters"), ::tele_rest::toJsonValue(m_reply_parameters));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    return obj;
}

OAISendMessageRequest_chat_id OAISendDocumentRequest::getChatId() const {
    return m_chat_id;
}
void OAISendDocumentRequest::setChatId(const OAISendMessageRequest_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAISendDocumentRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAISendDocumentRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

QString OAISendDocumentRequest::getDocument() const {
    return m_document;
}
void OAISendDocumentRequest::setDocument(const QString &document) {
    m_document = document;
    m_document_isSet = true;
}

bool OAISendDocumentRequest::is_document_Set() const{
    return m_document_isSet;
}

bool OAISendDocumentRequest::is_document_Valid() const{
    return m_document_isValid;
}

QString OAISendDocumentRequest::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAISendDocumentRequest::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAISendDocumentRequest::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAISendDocumentRequest::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

qint32 OAISendDocumentRequest::getMessageThreadId() const {
    return m_message_thread_id;
}
void OAISendDocumentRequest::setMessageThreadId(const qint32 &message_thread_id) {
    m_message_thread_id = message_thread_id;
    m_message_thread_id_isSet = true;
}

bool OAISendDocumentRequest::is_message_thread_id_Set() const{
    return m_message_thread_id_isSet;
}

bool OAISendDocumentRequest::is_message_thread_id_Valid() const{
    return m_message_thread_id_isValid;
}

QString OAISendDocumentRequest::getThumbnail() const {
    return m_thumbnail;
}
void OAISendDocumentRequest::setThumbnail(const QString &thumbnail) {
    m_thumbnail = thumbnail;
    m_thumbnail_isSet = true;
}

bool OAISendDocumentRequest::is_thumbnail_Set() const{
    return m_thumbnail_isSet;
}

bool OAISendDocumentRequest::is_thumbnail_Valid() const{
    return m_thumbnail_isValid;
}

QString OAISendDocumentRequest::getCaption() const {
    return m_caption;
}
void OAISendDocumentRequest::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAISendDocumentRequest::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAISendDocumentRequest::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAISendDocumentRequest::getParseMode() const {
    return m_parse_mode;
}
void OAISendDocumentRequest::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAISendDocumentRequest::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAISendDocumentRequest::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAISendDocumentRequest::getCaptionEntities() const {
    return m_caption_entities;
}
void OAISendDocumentRequest::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAISendDocumentRequest::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAISendDocumentRequest::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

bool OAISendDocumentRequest::isDisableContentTypeDetection() const {
    return m_disable_content_type_detection;
}
void OAISendDocumentRequest::setDisableContentTypeDetection(const bool &disable_content_type_detection) {
    m_disable_content_type_detection = disable_content_type_detection;
    m_disable_content_type_detection_isSet = true;
}

bool OAISendDocumentRequest::is_disable_content_type_detection_Set() const{
    return m_disable_content_type_detection_isSet;
}

bool OAISendDocumentRequest::is_disable_content_type_detection_Valid() const{
    return m_disable_content_type_detection_isValid;
}

bool OAISendDocumentRequest::isDisableNotification() const {
    return m_disable_notification;
}
void OAISendDocumentRequest::setDisableNotification(const bool &disable_notification) {
    m_disable_notification = disable_notification;
    m_disable_notification_isSet = true;
}

bool OAISendDocumentRequest::is_disable_notification_Set() const{
    return m_disable_notification_isSet;
}

bool OAISendDocumentRequest::is_disable_notification_Valid() const{
    return m_disable_notification_isValid;
}

bool OAISendDocumentRequest::isProtectContent() const {
    return m_protect_content;
}
void OAISendDocumentRequest::setProtectContent(const bool &protect_content) {
    m_protect_content = protect_content;
    m_protect_content_isSet = true;
}

bool OAISendDocumentRequest::is_protect_content_Set() const{
    return m_protect_content_isSet;
}

bool OAISendDocumentRequest::is_protect_content_Valid() const{
    return m_protect_content_isValid;
}

bool OAISendDocumentRequest::isAllowPaidBroadcast() const {
    return m_allow_paid_broadcast;
}
void OAISendDocumentRequest::setAllowPaidBroadcast(const bool &allow_paid_broadcast) {
    m_allow_paid_broadcast = allow_paid_broadcast;
    m_allow_paid_broadcast_isSet = true;
}

bool OAISendDocumentRequest::is_allow_paid_broadcast_Set() const{
    return m_allow_paid_broadcast_isSet;
}

bool OAISendDocumentRequest::is_allow_paid_broadcast_Valid() const{
    return m_allow_paid_broadcast_isValid;
}

QString OAISendDocumentRequest::getMessageEffectId() const {
    return m_message_effect_id;
}
void OAISendDocumentRequest::setMessageEffectId(const QString &message_effect_id) {
    m_message_effect_id = message_effect_id;
    m_message_effect_id_isSet = true;
}

bool OAISendDocumentRequest::is_message_effect_id_Set() const{
    return m_message_effect_id_isSet;
}

bool OAISendDocumentRequest::is_message_effect_id_Valid() const{
    return m_message_effect_id_isValid;
}

OAIReplyParameters OAISendDocumentRequest::getReplyParameters() const {
    return m_reply_parameters;
}
void OAISendDocumentRequest::setReplyParameters(const OAIReplyParameters &reply_parameters) {
    m_reply_parameters = reply_parameters;
    m_reply_parameters_isSet = true;
}

bool OAISendDocumentRequest::is_reply_parameters_Set() const{
    return m_reply_parameters_isSet;
}

bool OAISendDocumentRequest::is_reply_parameters_Valid() const{
    return m_reply_parameters_isValid;
}

OAISendMessageRequest_reply_markup OAISendDocumentRequest::getReplyMarkup() const {
    return m_reply_markup;
}
void OAISendDocumentRequest::setReplyMarkup(const OAISendMessageRequest_reply_markup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAISendDocumentRequest::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAISendDocumentRequest::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAISendDocumentRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_document_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_thread_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_isSet) {
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

        if (m_disable_content_type_detection_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_disable_notification_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_protect_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_paid_broadcast_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_effect_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_parameters.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISendDocumentRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_document_isValid && true;
}

} // namespace tele_rest
