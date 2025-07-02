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

#include "OAISendPaidMediaRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISendPaidMediaRequest::OAISendPaidMediaRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISendPaidMediaRequest::OAISendPaidMediaRequest() {
    this->initializeModel();
}

OAISendPaidMediaRequest::~OAISendPaidMediaRequest() {}

void OAISendPaidMediaRequest::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_star_count_isSet = false;
    m_star_count_isValid = false;

    m_media_isSet = false;
    m_media_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_payload_isSet = false;
    m_payload_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_show_caption_above_media_isSet = false;
    m_show_caption_above_media_isValid = false;

    m_disable_notification_isSet = false;
    m_disable_notification_isValid = false;

    m_protect_content_isSet = false;
    m_protect_content_isValid = false;

    m_allow_paid_broadcast_isSet = false;
    m_allow_paid_broadcast_isValid = false;

    m_reply_parameters_isSet = false;
    m_reply_parameters_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;
}

void OAISendPaidMediaRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISendPaidMediaRequest::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_star_count_isValid = ::tele_rest::fromJsonValue(m_star_count, json[QString("star_count")]);
    m_star_count_isSet = !json[QString("star_count")].isNull() && m_star_count_isValid;

    m_media_isValid = ::tele_rest::fromJsonValue(m_media, json[QString("media")]);
    m_media_isSet = !json[QString("media")].isNull() && m_media_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_payload_isValid = ::tele_rest::fromJsonValue(m_payload, json[QString("payload")]);
    m_payload_isSet = !json[QString("payload")].isNull() && m_payload_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_show_caption_above_media_isValid = ::tele_rest::fromJsonValue(m_show_caption_above_media, json[QString("show_caption_above_media")]);
    m_show_caption_above_media_isSet = !json[QString("show_caption_above_media")].isNull() && m_show_caption_above_media_isValid;

    m_disable_notification_isValid = ::tele_rest::fromJsonValue(m_disable_notification, json[QString("disable_notification")]);
    m_disable_notification_isSet = !json[QString("disable_notification")].isNull() && m_disable_notification_isValid;

    m_protect_content_isValid = ::tele_rest::fromJsonValue(m_protect_content, json[QString("protect_content")]);
    m_protect_content_isSet = !json[QString("protect_content")].isNull() && m_protect_content_isValid;

    m_allow_paid_broadcast_isValid = ::tele_rest::fromJsonValue(m_allow_paid_broadcast, json[QString("allow_paid_broadcast")]);
    m_allow_paid_broadcast_isSet = !json[QString("allow_paid_broadcast")].isNull() && m_allow_paid_broadcast_isValid;

    m_reply_parameters_isValid = ::tele_rest::fromJsonValue(m_reply_parameters, json[QString("reply_parameters")]);
    m_reply_parameters_isSet = !json[QString("reply_parameters")].isNull() && m_reply_parameters_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;
}

QString OAISendPaidMediaRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISendPaidMediaRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_star_count_isSet) {
        obj.insert(QString("star_count"), ::tele_rest::toJsonValue(m_star_count));
    }
    if (m_media.size() > 0) {
        obj.insert(QString("media"), ::tele_rest::toJsonValue(m_media));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_payload_isSet) {
        obj.insert(QString("payload"), ::tele_rest::toJsonValue(m_payload));
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
    if (m_show_caption_above_media_isSet) {
        obj.insert(QString("show_caption_above_media"), ::tele_rest::toJsonValue(m_show_caption_above_media));
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
    if (m_reply_parameters.isSet()) {
        obj.insert(QString("reply_parameters"), ::tele_rest::toJsonValue(m_reply_parameters));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    return obj;
}

OAISendPaidMediaRequest_chat_id OAISendPaidMediaRequest::getChatId() const {
    return m_chat_id;
}
void OAISendPaidMediaRequest::setChatId(const OAISendPaidMediaRequest_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAISendPaidMediaRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAISendPaidMediaRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAISendPaidMediaRequest::getStarCount() const {
    return m_star_count;
}
void OAISendPaidMediaRequest::setStarCount(const qint32 &star_count) {
    m_star_count = star_count;
    m_star_count_isSet = true;
}

bool OAISendPaidMediaRequest::is_star_count_Set() const{
    return m_star_count_isSet;
}

bool OAISendPaidMediaRequest::is_star_count_Valid() const{
    return m_star_count_isValid;
}

QList<OAIInputPaidMedia> OAISendPaidMediaRequest::getMedia() const {
    return m_media;
}
void OAISendPaidMediaRequest::setMedia(const QList<OAIInputPaidMedia> &media) {
    m_media = media;
    m_media_isSet = true;
}

bool OAISendPaidMediaRequest::is_media_Set() const{
    return m_media_isSet;
}

bool OAISendPaidMediaRequest::is_media_Valid() const{
    return m_media_isValid;
}

QString OAISendPaidMediaRequest::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAISendPaidMediaRequest::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAISendPaidMediaRequest::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAISendPaidMediaRequest::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

QString OAISendPaidMediaRequest::getPayload() const {
    return m_payload;
}
void OAISendPaidMediaRequest::setPayload(const QString &payload) {
    m_payload = payload;
    m_payload_isSet = true;
}

bool OAISendPaidMediaRequest::is_payload_Set() const{
    return m_payload_isSet;
}

bool OAISendPaidMediaRequest::is_payload_Valid() const{
    return m_payload_isValid;
}

QString OAISendPaidMediaRequest::getCaption() const {
    return m_caption;
}
void OAISendPaidMediaRequest::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAISendPaidMediaRequest::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAISendPaidMediaRequest::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAISendPaidMediaRequest::getParseMode() const {
    return m_parse_mode;
}
void OAISendPaidMediaRequest::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAISendPaidMediaRequest::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAISendPaidMediaRequest::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAISendPaidMediaRequest::getCaptionEntities() const {
    return m_caption_entities;
}
void OAISendPaidMediaRequest::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAISendPaidMediaRequest::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAISendPaidMediaRequest::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

bool OAISendPaidMediaRequest::isShowCaptionAboveMedia() const {
    return m_show_caption_above_media;
}
void OAISendPaidMediaRequest::setShowCaptionAboveMedia(const bool &show_caption_above_media) {
    m_show_caption_above_media = show_caption_above_media;
    m_show_caption_above_media_isSet = true;
}

bool OAISendPaidMediaRequest::is_show_caption_above_media_Set() const{
    return m_show_caption_above_media_isSet;
}

bool OAISendPaidMediaRequest::is_show_caption_above_media_Valid() const{
    return m_show_caption_above_media_isValid;
}

bool OAISendPaidMediaRequest::isDisableNotification() const {
    return m_disable_notification;
}
void OAISendPaidMediaRequest::setDisableNotification(const bool &disable_notification) {
    m_disable_notification = disable_notification;
    m_disable_notification_isSet = true;
}

bool OAISendPaidMediaRequest::is_disable_notification_Set() const{
    return m_disable_notification_isSet;
}

bool OAISendPaidMediaRequest::is_disable_notification_Valid() const{
    return m_disable_notification_isValid;
}

bool OAISendPaidMediaRequest::isProtectContent() const {
    return m_protect_content;
}
void OAISendPaidMediaRequest::setProtectContent(const bool &protect_content) {
    m_protect_content = protect_content;
    m_protect_content_isSet = true;
}

bool OAISendPaidMediaRequest::is_protect_content_Set() const{
    return m_protect_content_isSet;
}

bool OAISendPaidMediaRequest::is_protect_content_Valid() const{
    return m_protect_content_isValid;
}

bool OAISendPaidMediaRequest::isAllowPaidBroadcast() const {
    return m_allow_paid_broadcast;
}
void OAISendPaidMediaRequest::setAllowPaidBroadcast(const bool &allow_paid_broadcast) {
    m_allow_paid_broadcast = allow_paid_broadcast;
    m_allow_paid_broadcast_isSet = true;
}

bool OAISendPaidMediaRequest::is_allow_paid_broadcast_Set() const{
    return m_allow_paid_broadcast_isSet;
}

bool OAISendPaidMediaRequest::is_allow_paid_broadcast_Valid() const{
    return m_allow_paid_broadcast_isValid;
}

OAIReplyParameters OAISendPaidMediaRequest::getReplyParameters() const {
    return m_reply_parameters;
}
void OAISendPaidMediaRequest::setReplyParameters(const OAIReplyParameters &reply_parameters) {
    m_reply_parameters = reply_parameters;
    m_reply_parameters_isSet = true;
}

bool OAISendPaidMediaRequest::is_reply_parameters_Set() const{
    return m_reply_parameters_isSet;
}

bool OAISendPaidMediaRequest::is_reply_parameters_Valid() const{
    return m_reply_parameters_isValid;
}

OAISendMessageRequest_reply_markup OAISendPaidMediaRequest::getReplyMarkup() const {
    return m_reply_markup;
}
void OAISendPaidMediaRequest::setReplyMarkup(const OAISendMessageRequest_reply_markup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAISendPaidMediaRequest::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAISendPaidMediaRequest::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAISendPaidMediaRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_media.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_payload_isSet) {
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

        if (m_show_caption_above_media_isSet) {
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

bool OAISendPaidMediaRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_star_count_isValid && m_media_isValid && true;
}

} // namespace tele_rest
