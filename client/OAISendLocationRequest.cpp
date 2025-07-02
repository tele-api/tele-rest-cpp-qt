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

#include "OAISendLocationRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISendLocationRequest::OAISendLocationRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISendLocationRequest::OAISendLocationRequest() {
    this->initializeModel();
}

OAISendLocationRequest::~OAISendLocationRequest() {}

void OAISendLocationRequest::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_message_thread_id_isSet = false;
    m_message_thread_id_isValid = false;

    m_horizontal_accuracy_isSet = false;
    m_horizontal_accuracy_isValid = false;

    m_live_period_isSet = false;
    m_live_period_isValid = false;

    m_heading_isSet = false;
    m_heading_isValid = false;

    m_proximity_alert_radius_isSet = false;
    m_proximity_alert_radius_isValid = false;

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

void OAISendLocationRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISendLocationRequest::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_message_thread_id_isValid = ::tele_rest::fromJsonValue(m_message_thread_id, json[QString("message_thread_id")]);
    m_message_thread_id_isSet = !json[QString("message_thread_id")].isNull() && m_message_thread_id_isValid;

    m_horizontal_accuracy_isValid = ::tele_rest::fromJsonValue(m_horizontal_accuracy, json[QString("horizontal_accuracy")]);
    m_horizontal_accuracy_isSet = !json[QString("horizontal_accuracy")].isNull() && m_horizontal_accuracy_isValid;

    m_live_period_isValid = ::tele_rest::fromJsonValue(m_live_period, json[QString("live_period")]);
    m_live_period_isSet = !json[QString("live_period")].isNull() && m_live_period_isValid;

    m_heading_isValid = ::tele_rest::fromJsonValue(m_heading, json[QString("heading")]);
    m_heading_isSet = !json[QString("heading")].isNull() && m_heading_isValid;

    m_proximity_alert_radius_isValid = ::tele_rest::fromJsonValue(m_proximity_alert_radius, json[QString("proximity_alert_radius")]);
    m_proximity_alert_radius_isSet = !json[QString("proximity_alert_radius")].isNull() && m_proximity_alert_radius_isValid;

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

QString OAISendLocationRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISendLocationRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_latitude_isSet) {
        obj.insert(QString("latitude"), ::tele_rest::toJsonValue(m_latitude));
    }
    if (m_longitude_isSet) {
        obj.insert(QString("longitude"), ::tele_rest::toJsonValue(m_longitude));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_message_thread_id_isSet) {
        obj.insert(QString("message_thread_id"), ::tele_rest::toJsonValue(m_message_thread_id));
    }
    if (m_horizontal_accuracy_isSet) {
        obj.insert(QString("horizontal_accuracy"), ::tele_rest::toJsonValue(m_horizontal_accuracy));
    }
    if (m_live_period_isSet) {
        obj.insert(QString("live_period"), ::tele_rest::toJsonValue(m_live_period));
    }
    if (m_heading_isSet) {
        obj.insert(QString("heading"), ::tele_rest::toJsonValue(m_heading));
    }
    if (m_proximity_alert_radius_isSet) {
        obj.insert(QString("proximity_alert_radius"), ::tele_rest::toJsonValue(m_proximity_alert_radius));
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

OAISendMessageRequest_chat_id OAISendLocationRequest::getChatId() const {
    return m_chat_id;
}
void OAISendLocationRequest::setChatId(const OAISendMessageRequest_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAISendLocationRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAISendLocationRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

double OAISendLocationRequest::getLatitude() const {
    return m_latitude;
}
void OAISendLocationRequest::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAISendLocationRequest::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAISendLocationRequest::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAISendLocationRequest::getLongitude() const {
    return m_longitude;
}
void OAISendLocationRequest::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAISendLocationRequest::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAISendLocationRequest::is_longitude_Valid() const{
    return m_longitude_isValid;
}

QString OAISendLocationRequest::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAISendLocationRequest::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAISendLocationRequest::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAISendLocationRequest::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

qint32 OAISendLocationRequest::getMessageThreadId() const {
    return m_message_thread_id;
}
void OAISendLocationRequest::setMessageThreadId(const qint32 &message_thread_id) {
    m_message_thread_id = message_thread_id;
    m_message_thread_id_isSet = true;
}

bool OAISendLocationRequest::is_message_thread_id_Set() const{
    return m_message_thread_id_isSet;
}

bool OAISendLocationRequest::is_message_thread_id_Valid() const{
    return m_message_thread_id_isValid;
}

double OAISendLocationRequest::getHorizontalAccuracy() const {
    return m_horizontal_accuracy;
}
void OAISendLocationRequest::setHorizontalAccuracy(const double &horizontal_accuracy) {
    m_horizontal_accuracy = horizontal_accuracy;
    m_horizontal_accuracy_isSet = true;
}

bool OAISendLocationRequest::is_horizontal_accuracy_Set() const{
    return m_horizontal_accuracy_isSet;
}

bool OAISendLocationRequest::is_horizontal_accuracy_Valid() const{
    return m_horizontal_accuracy_isValid;
}

qint32 OAISendLocationRequest::getLivePeriod() const {
    return m_live_period;
}
void OAISendLocationRequest::setLivePeriod(const qint32 &live_period) {
    m_live_period = live_period;
    m_live_period_isSet = true;
}

bool OAISendLocationRequest::is_live_period_Set() const{
    return m_live_period_isSet;
}

bool OAISendLocationRequest::is_live_period_Valid() const{
    return m_live_period_isValid;
}

qint32 OAISendLocationRequest::getHeading() const {
    return m_heading;
}
void OAISendLocationRequest::setHeading(const qint32 &heading) {
    m_heading = heading;
    m_heading_isSet = true;
}

bool OAISendLocationRequest::is_heading_Set() const{
    return m_heading_isSet;
}

bool OAISendLocationRequest::is_heading_Valid() const{
    return m_heading_isValid;
}

qint32 OAISendLocationRequest::getProximityAlertRadius() const {
    return m_proximity_alert_radius;
}
void OAISendLocationRequest::setProximityAlertRadius(const qint32 &proximity_alert_radius) {
    m_proximity_alert_radius = proximity_alert_radius;
    m_proximity_alert_radius_isSet = true;
}

bool OAISendLocationRequest::is_proximity_alert_radius_Set() const{
    return m_proximity_alert_radius_isSet;
}

bool OAISendLocationRequest::is_proximity_alert_radius_Valid() const{
    return m_proximity_alert_radius_isValid;
}

bool OAISendLocationRequest::isDisableNotification() const {
    return m_disable_notification;
}
void OAISendLocationRequest::setDisableNotification(const bool &disable_notification) {
    m_disable_notification = disable_notification;
    m_disable_notification_isSet = true;
}

bool OAISendLocationRequest::is_disable_notification_Set() const{
    return m_disable_notification_isSet;
}

bool OAISendLocationRequest::is_disable_notification_Valid() const{
    return m_disable_notification_isValid;
}

bool OAISendLocationRequest::isProtectContent() const {
    return m_protect_content;
}
void OAISendLocationRequest::setProtectContent(const bool &protect_content) {
    m_protect_content = protect_content;
    m_protect_content_isSet = true;
}

bool OAISendLocationRequest::is_protect_content_Set() const{
    return m_protect_content_isSet;
}

bool OAISendLocationRequest::is_protect_content_Valid() const{
    return m_protect_content_isValid;
}

bool OAISendLocationRequest::isAllowPaidBroadcast() const {
    return m_allow_paid_broadcast;
}
void OAISendLocationRequest::setAllowPaidBroadcast(const bool &allow_paid_broadcast) {
    m_allow_paid_broadcast = allow_paid_broadcast;
    m_allow_paid_broadcast_isSet = true;
}

bool OAISendLocationRequest::is_allow_paid_broadcast_Set() const{
    return m_allow_paid_broadcast_isSet;
}

bool OAISendLocationRequest::is_allow_paid_broadcast_Valid() const{
    return m_allow_paid_broadcast_isValid;
}

QString OAISendLocationRequest::getMessageEffectId() const {
    return m_message_effect_id;
}
void OAISendLocationRequest::setMessageEffectId(const QString &message_effect_id) {
    m_message_effect_id = message_effect_id;
    m_message_effect_id_isSet = true;
}

bool OAISendLocationRequest::is_message_effect_id_Set() const{
    return m_message_effect_id_isSet;
}

bool OAISendLocationRequest::is_message_effect_id_Valid() const{
    return m_message_effect_id_isValid;
}

OAIReplyParameters OAISendLocationRequest::getReplyParameters() const {
    return m_reply_parameters;
}
void OAISendLocationRequest::setReplyParameters(const OAIReplyParameters &reply_parameters) {
    m_reply_parameters = reply_parameters;
    m_reply_parameters_isSet = true;
}

bool OAISendLocationRequest::is_reply_parameters_Set() const{
    return m_reply_parameters_isSet;
}

bool OAISendLocationRequest::is_reply_parameters_Valid() const{
    return m_reply_parameters_isValid;
}

OAISendMessageRequest_reply_markup OAISendLocationRequest::getReplyMarkup() const {
    return m_reply_markup;
}
void OAISendLocationRequest::setReplyMarkup(const OAISendMessageRequest_reply_markup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAISendLocationRequest::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAISendLocationRequest::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAISendLocationRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

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

        if (m_message_thread_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_horizontal_accuracy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_live_period_isSet) {
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

bool OAISendLocationRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_latitude_isValid && m_longitude_isValid && true;
}

} // namespace tele_rest
