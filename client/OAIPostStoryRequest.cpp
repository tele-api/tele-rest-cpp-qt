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

#include "OAIPostStoryRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPostStoryRequest::OAIPostStoryRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPostStoryRequest::OAIPostStoryRequest() {
    this->initializeModel();
}

OAIPostStoryRequest::~OAIPostStoryRequest() {}

void OAIPostStoryRequest::initializeModel() {

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_content_isSet = false;
    m_content_isValid = false;

    m_active_period_isSet = false;
    m_active_period_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_areas_isSet = false;
    m_areas_isValid = false;

    m_post_to_chat_page_isSet = false;
    m_post_to_chat_page_isValid = false;

    m_protect_content_isSet = false;
    m_protect_content_isValid = false;
}

void OAIPostStoryRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPostStoryRequest::fromJsonObject(QJsonObject json) {

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_content_isValid = ::tele_rest::fromJsonValue(m_content, json[QString("content")]);
    m_content_isSet = !json[QString("content")].isNull() && m_content_isValid;

    m_active_period_isValid = ::tele_rest::fromJsonValue(m_active_period, json[QString("active_period")]);
    m_active_period_isSet = !json[QString("active_period")].isNull() && m_active_period_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_areas_isValid = ::tele_rest::fromJsonValue(m_areas, json[QString("areas")]);
    m_areas_isSet = !json[QString("areas")].isNull() && m_areas_isValid;

    m_post_to_chat_page_isValid = ::tele_rest::fromJsonValue(m_post_to_chat_page, json[QString("post_to_chat_page")]);
    m_post_to_chat_page_isSet = !json[QString("post_to_chat_page")].isNull() && m_post_to_chat_page_isValid;

    m_protect_content_isValid = ::tele_rest::fromJsonValue(m_protect_content, json[QString("protect_content")]);
    m_protect_content_isSet = !json[QString("protect_content")].isNull() && m_protect_content_isValid;
}

QString OAIPostStoryRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPostStoryRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_content.isSet()) {
        obj.insert(QString("content"), ::tele_rest::toJsonValue(m_content));
    }
    if (m_active_period_isSet) {
        obj.insert(QString("active_period"), ::tele_rest::toJsonValue(m_active_period));
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
    if (m_areas.size() > 0) {
        obj.insert(QString("areas"), ::tele_rest::toJsonValue(m_areas));
    }
    if (m_post_to_chat_page_isSet) {
        obj.insert(QString("post_to_chat_page"), ::tele_rest::toJsonValue(m_post_to_chat_page));
    }
    if (m_protect_content_isSet) {
        obj.insert(QString("protect_content"), ::tele_rest::toJsonValue(m_protect_content));
    }
    return obj;
}

QString OAIPostStoryRequest::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAIPostStoryRequest::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAIPostStoryRequest::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAIPostStoryRequest::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

OAIInputStoryContent OAIPostStoryRequest::getContent() const {
    return m_content;
}
void OAIPostStoryRequest::setContent(const OAIInputStoryContent &content) {
    m_content = content;
    m_content_isSet = true;
}

bool OAIPostStoryRequest::is_content_Set() const{
    return m_content_isSet;
}

bool OAIPostStoryRequest::is_content_Valid() const{
    return m_content_isValid;
}

qint32 OAIPostStoryRequest::getActivePeriod() const {
    return m_active_period;
}
void OAIPostStoryRequest::setActivePeriod(const qint32 &active_period) {
    m_active_period = active_period;
    m_active_period_isSet = true;
}

bool OAIPostStoryRequest::is_active_period_Set() const{
    return m_active_period_isSet;
}

bool OAIPostStoryRequest::is_active_period_Valid() const{
    return m_active_period_isValid;
}

QString OAIPostStoryRequest::getCaption() const {
    return m_caption;
}
void OAIPostStoryRequest::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAIPostStoryRequest::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAIPostStoryRequest::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAIPostStoryRequest::getParseMode() const {
    return m_parse_mode;
}
void OAIPostStoryRequest::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAIPostStoryRequest::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAIPostStoryRequest::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIPostStoryRequest::getCaptionEntities() const {
    return m_caption_entities;
}
void OAIPostStoryRequest::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAIPostStoryRequest::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAIPostStoryRequest::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

QList<OAIStoryArea> OAIPostStoryRequest::getAreas() const {
    return m_areas;
}
void OAIPostStoryRequest::setAreas(const QList<OAIStoryArea> &areas) {
    m_areas = areas;
    m_areas_isSet = true;
}

bool OAIPostStoryRequest::is_areas_Set() const{
    return m_areas_isSet;
}

bool OAIPostStoryRequest::is_areas_Valid() const{
    return m_areas_isValid;
}

bool OAIPostStoryRequest::isPostToChatPage() const {
    return m_post_to_chat_page;
}
void OAIPostStoryRequest::setPostToChatPage(const bool &post_to_chat_page) {
    m_post_to_chat_page = post_to_chat_page;
    m_post_to_chat_page_isSet = true;
}

bool OAIPostStoryRequest::is_post_to_chat_page_Set() const{
    return m_post_to_chat_page_isSet;
}

bool OAIPostStoryRequest::is_post_to_chat_page_Valid() const{
    return m_post_to_chat_page_isValid;
}

bool OAIPostStoryRequest::isProtectContent() const {
    return m_protect_content;
}
void OAIPostStoryRequest::setProtectContent(const bool &protect_content) {
    m_protect_content = protect_content;
    m_protect_content_isSet = true;
}

bool OAIPostStoryRequest::is_protect_content_Set() const{
    return m_protect_content_isSet;
}

bool OAIPostStoryRequest::is_protect_content_Valid() const{
    return m_protect_content_isValid;
}

bool OAIPostStoryRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_content.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_active_period_isSet) {
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

        if (m_areas.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_post_to_chat_page_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_protect_content_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPostStoryRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_business_connection_id_isValid && m_content_isValid && m_active_period_isValid && true;
}

} // namespace tele_rest
