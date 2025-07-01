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

#include "OAI_editMessageLiveLocation_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_editMessageLiveLocation_post_request::OAI_editMessageLiveLocation_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_editMessageLiveLocation_post_request::OAI_editMessageLiveLocation_post_request() {
    this->initializeModel();
}

OAI_editMessageLiveLocation_post_request::~OAI_editMessageLiveLocation_post_request() {}

void OAI_editMessageLiveLocation_post_request::initializeModel() {

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_inline_message_id_isSet = false;
    m_inline_message_id_isValid = false;

    m_live_period_isSet = false;
    m_live_period_isValid = false;

    m_horizontal_accuracy_isSet = false;
    m_horizontal_accuracy_isValid = false;

    m_heading_isSet = false;
    m_heading_isValid = false;

    m_proximity_alert_radius_isSet = false;
    m_proximity_alert_radius_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;
}

void OAI_editMessageLiveLocation_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_editMessageLiveLocation_post_request::fromJsonObject(QJsonObject json) {

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_inline_message_id_isValid = ::tele_rest::fromJsonValue(m_inline_message_id, json[QString("inline_message_id")]);
    m_inline_message_id_isSet = !json[QString("inline_message_id")].isNull() && m_inline_message_id_isValid;

    m_live_period_isValid = ::tele_rest::fromJsonValue(m_live_period, json[QString("live_period")]);
    m_live_period_isSet = !json[QString("live_period")].isNull() && m_live_period_isValid;

    m_horizontal_accuracy_isValid = ::tele_rest::fromJsonValue(m_horizontal_accuracy, json[QString("horizontal_accuracy")]);
    m_horizontal_accuracy_isSet = !json[QString("horizontal_accuracy")].isNull() && m_horizontal_accuracy_isValid;

    m_heading_isValid = ::tele_rest::fromJsonValue(m_heading, json[QString("heading")]);
    m_heading_isSet = !json[QString("heading")].isNull() && m_heading_isValid;

    m_proximity_alert_radius_isValid = ::tele_rest::fromJsonValue(m_proximity_alert_radius, json[QString("proximity_alert_radius")]);
    m_proximity_alert_radius_isSet = !json[QString("proximity_alert_radius")].isNull() && m_proximity_alert_radius_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;
}

QString OAI_editMessageLiveLocation_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_editMessageLiveLocation_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_latitude_isSet) {
        obj.insert(QString("latitude"), ::tele_rest::toJsonValue(m_latitude));
    }
    if (m_longitude_isSet) {
        obj.insert(QString("longitude"), ::tele_rest::toJsonValue(m_longitude));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_inline_message_id_isSet) {
        obj.insert(QString("inline_message_id"), ::tele_rest::toJsonValue(m_inline_message_id));
    }
    if (m_live_period_isSet) {
        obj.insert(QString("live_period"), ::tele_rest::toJsonValue(m_live_period));
    }
    if (m_horizontal_accuracy_isSet) {
        obj.insert(QString("horizontal_accuracy"), ::tele_rest::toJsonValue(m_horizontal_accuracy));
    }
    if (m_heading_isSet) {
        obj.insert(QString("heading"), ::tele_rest::toJsonValue(m_heading));
    }
    if (m_proximity_alert_radius_isSet) {
        obj.insert(QString("proximity_alert_radius"), ::tele_rest::toJsonValue(m_proximity_alert_radius));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    return obj;
}

double OAI_editMessageLiveLocation_post_request::getLatitude() const {
    return m_latitude;
}
void OAI_editMessageLiveLocation_post_request::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAI_editMessageLiveLocation_post_request::getLongitude() const {
    return m_longitude;
}
void OAI_editMessageLiveLocation_post_request::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_longitude_Valid() const{
    return m_longitude_isValid;
}

QString OAI_editMessageLiveLocation_post_request::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAI_editMessageLiveLocation_post_request::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

OAI_editMessageText_post_request_chat_id OAI_editMessageLiveLocation_post_request::getChatId() const {
    return m_chat_id;
}
void OAI_editMessageLiveLocation_post_request::setChatId(const OAI_editMessageText_post_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAI_editMessageLiveLocation_post_request::getMessageId() const {
    return m_message_id;
}
void OAI_editMessageLiveLocation_post_request::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_message_id_Valid() const{
    return m_message_id_isValid;
}

QString OAI_editMessageLiveLocation_post_request::getInlineMessageId() const {
    return m_inline_message_id;
}
void OAI_editMessageLiveLocation_post_request::setInlineMessageId(const QString &inline_message_id) {
    m_inline_message_id = inline_message_id;
    m_inline_message_id_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_inline_message_id_Set() const{
    return m_inline_message_id_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_inline_message_id_Valid() const{
    return m_inline_message_id_isValid;
}

qint32 OAI_editMessageLiveLocation_post_request::getLivePeriod() const {
    return m_live_period;
}
void OAI_editMessageLiveLocation_post_request::setLivePeriod(const qint32 &live_period) {
    m_live_period = live_period;
    m_live_period_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_live_period_Set() const{
    return m_live_period_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_live_period_Valid() const{
    return m_live_period_isValid;
}

double OAI_editMessageLiveLocation_post_request::getHorizontalAccuracy() const {
    return m_horizontal_accuracy;
}
void OAI_editMessageLiveLocation_post_request::setHorizontalAccuracy(const double &horizontal_accuracy) {
    m_horizontal_accuracy = horizontal_accuracy;
    m_horizontal_accuracy_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_horizontal_accuracy_Set() const{
    return m_horizontal_accuracy_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_horizontal_accuracy_Valid() const{
    return m_horizontal_accuracy_isValid;
}

qint32 OAI_editMessageLiveLocation_post_request::getHeading() const {
    return m_heading;
}
void OAI_editMessageLiveLocation_post_request::setHeading(const qint32 &heading) {
    m_heading = heading;
    m_heading_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_heading_Set() const{
    return m_heading_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_heading_Valid() const{
    return m_heading_isValid;
}

qint32 OAI_editMessageLiveLocation_post_request::getProximityAlertRadius() const {
    return m_proximity_alert_radius;
}
void OAI_editMessageLiveLocation_post_request::setProximityAlertRadius(const qint32 &proximity_alert_radius) {
    m_proximity_alert_radius = proximity_alert_radius;
    m_proximity_alert_radius_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_proximity_alert_radius_Set() const{
    return m_proximity_alert_radius_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_proximity_alert_radius_Valid() const{
    return m_proximity_alert_radius_isValid;
}

OAIInlineKeyboardMarkup OAI_editMessageLiveLocation_post_request::getReplyMarkup() const {
    return m_reply_markup;
}
void OAI_editMessageLiveLocation_post_request::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAI_editMessageLiveLocation_post_request::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAI_editMessageLiveLocation_post_request::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAI_editMessageLiveLocation_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_latitude_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_longitude_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_inline_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_live_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_horizontal_accuracy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_heading_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_proximity_alert_radius_isSet) {
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

bool OAI_editMessageLiveLocation_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_latitude_isValid && m_longitude_isValid && true;
}

} // namespace tele_rest
