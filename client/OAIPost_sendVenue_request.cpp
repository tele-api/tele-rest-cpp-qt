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

#include "OAIPost_sendVenue_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPost_sendVenue_request::OAIPost_sendVenue_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPost_sendVenue_request::OAIPost_sendVenue_request() {
    this->initializeModel();
}

OAIPost_sendVenue_request::~OAIPost_sendVenue_request() {}

void OAIPost_sendVenue_request::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_message_thread_id_isSet = false;
    m_message_thread_id_isValid = false;

    m_foursquare_id_isSet = false;
    m_foursquare_id_isValid = false;

    m_foursquare_type_isSet = false;
    m_foursquare_type_isValid = false;

    m_google_place_id_isSet = false;
    m_google_place_id_isValid = false;

    m_google_place_type_isSet = false;
    m_google_place_type_isValid = false;

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

void OAIPost_sendVenue_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPost_sendVenue_request::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_address_isValid = ::tele_rest::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_message_thread_id_isValid = ::tele_rest::fromJsonValue(m_message_thread_id, json[QString("message_thread_id")]);
    m_message_thread_id_isSet = !json[QString("message_thread_id")].isNull() && m_message_thread_id_isValid;

    m_foursquare_id_isValid = ::tele_rest::fromJsonValue(m_foursquare_id, json[QString("foursquare_id")]);
    m_foursquare_id_isSet = !json[QString("foursquare_id")].isNull() && m_foursquare_id_isValid;

    m_foursquare_type_isValid = ::tele_rest::fromJsonValue(m_foursquare_type, json[QString("foursquare_type")]);
    m_foursquare_type_isSet = !json[QString("foursquare_type")].isNull() && m_foursquare_type_isValid;

    m_google_place_id_isValid = ::tele_rest::fromJsonValue(m_google_place_id, json[QString("google_place_id")]);
    m_google_place_id_isSet = !json[QString("google_place_id")].isNull() && m_google_place_id_isValid;

    m_google_place_type_isValid = ::tele_rest::fromJsonValue(m_google_place_type, json[QString("google_place_type")]);
    m_google_place_type_isSet = !json[QString("google_place_type")].isNull() && m_google_place_type_isValid;

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

QString OAIPost_sendVenue_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPost_sendVenue_request::asJsonObject() const {
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
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_address_isSet) {
        obj.insert(QString("address"), ::tele_rest::toJsonValue(m_address));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_message_thread_id_isSet) {
        obj.insert(QString("message_thread_id"), ::tele_rest::toJsonValue(m_message_thread_id));
    }
    if (m_foursquare_id_isSet) {
        obj.insert(QString("foursquare_id"), ::tele_rest::toJsonValue(m_foursquare_id));
    }
    if (m_foursquare_type_isSet) {
        obj.insert(QString("foursquare_type"), ::tele_rest::toJsonValue(m_foursquare_type));
    }
    if (m_google_place_id_isSet) {
        obj.insert(QString("google_place_id"), ::tele_rest::toJsonValue(m_google_place_id));
    }
    if (m_google_place_type_isSet) {
        obj.insert(QString("google_place_type"), ::tele_rest::toJsonValue(m_google_place_type));
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

OAIPost_sendMessage_request_chat_id OAIPost_sendVenue_request::getChatId() const {
    return m_chat_id;
}
void OAIPost_sendVenue_request::setChatId(const OAIPost_sendMessage_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIPost_sendVenue_request::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIPost_sendVenue_request::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

double OAIPost_sendVenue_request::getLatitude() const {
    return m_latitude;
}
void OAIPost_sendVenue_request::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAIPost_sendVenue_request::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAIPost_sendVenue_request::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAIPost_sendVenue_request::getLongitude() const {
    return m_longitude;
}
void OAIPost_sendVenue_request::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAIPost_sendVenue_request::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAIPost_sendVenue_request::is_longitude_Valid() const{
    return m_longitude_isValid;
}

QString OAIPost_sendVenue_request::getTitle() const {
    return m_title;
}
void OAIPost_sendVenue_request::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIPost_sendVenue_request::is_title_Set() const{
    return m_title_isSet;
}

bool OAIPost_sendVenue_request::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIPost_sendVenue_request::getAddress() const {
    return m_address;
}
void OAIPost_sendVenue_request::setAddress(const QString &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAIPost_sendVenue_request::is_address_Set() const{
    return m_address_isSet;
}

bool OAIPost_sendVenue_request::is_address_Valid() const{
    return m_address_isValid;
}

QString OAIPost_sendVenue_request::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAIPost_sendVenue_request::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAIPost_sendVenue_request::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAIPost_sendVenue_request::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

qint32 OAIPost_sendVenue_request::getMessageThreadId() const {
    return m_message_thread_id;
}
void OAIPost_sendVenue_request::setMessageThreadId(const qint32 &message_thread_id) {
    m_message_thread_id = message_thread_id;
    m_message_thread_id_isSet = true;
}

bool OAIPost_sendVenue_request::is_message_thread_id_Set() const{
    return m_message_thread_id_isSet;
}

bool OAIPost_sendVenue_request::is_message_thread_id_Valid() const{
    return m_message_thread_id_isValid;
}

QString OAIPost_sendVenue_request::getFoursquareId() const {
    return m_foursquare_id;
}
void OAIPost_sendVenue_request::setFoursquareId(const QString &foursquare_id) {
    m_foursquare_id = foursquare_id;
    m_foursquare_id_isSet = true;
}

bool OAIPost_sendVenue_request::is_foursquare_id_Set() const{
    return m_foursquare_id_isSet;
}

bool OAIPost_sendVenue_request::is_foursquare_id_Valid() const{
    return m_foursquare_id_isValid;
}

QString OAIPost_sendVenue_request::getFoursquareType() const {
    return m_foursquare_type;
}
void OAIPost_sendVenue_request::setFoursquareType(const QString &foursquare_type) {
    m_foursquare_type = foursquare_type;
    m_foursquare_type_isSet = true;
}

bool OAIPost_sendVenue_request::is_foursquare_type_Set() const{
    return m_foursquare_type_isSet;
}

bool OAIPost_sendVenue_request::is_foursquare_type_Valid() const{
    return m_foursquare_type_isValid;
}

QString OAIPost_sendVenue_request::getGooglePlaceId() const {
    return m_google_place_id;
}
void OAIPost_sendVenue_request::setGooglePlaceId(const QString &google_place_id) {
    m_google_place_id = google_place_id;
    m_google_place_id_isSet = true;
}

bool OAIPost_sendVenue_request::is_google_place_id_Set() const{
    return m_google_place_id_isSet;
}

bool OAIPost_sendVenue_request::is_google_place_id_Valid() const{
    return m_google_place_id_isValid;
}

QString OAIPost_sendVenue_request::getGooglePlaceType() const {
    return m_google_place_type;
}
void OAIPost_sendVenue_request::setGooglePlaceType(const QString &google_place_type) {
    m_google_place_type = google_place_type;
    m_google_place_type_isSet = true;
}

bool OAIPost_sendVenue_request::is_google_place_type_Set() const{
    return m_google_place_type_isSet;
}

bool OAIPost_sendVenue_request::is_google_place_type_Valid() const{
    return m_google_place_type_isValid;
}

bool OAIPost_sendVenue_request::isDisableNotification() const {
    return m_disable_notification;
}
void OAIPost_sendVenue_request::setDisableNotification(const bool &disable_notification) {
    m_disable_notification = disable_notification;
    m_disable_notification_isSet = true;
}

bool OAIPost_sendVenue_request::is_disable_notification_Set() const{
    return m_disable_notification_isSet;
}

bool OAIPost_sendVenue_request::is_disable_notification_Valid() const{
    return m_disable_notification_isValid;
}

bool OAIPost_sendVenue_request::isProtectContent() const {
    return m_protect_content;
}
void OAIPost_sendVenue_request::setProtectContent(const bool &protect_content) {
    m_protect_content = protect_content;
    m_protect_content_isSet = true;
}

bool OAIPost_sendVenue_request::is_protect_content_Set() const{
    return m_protect_content_isSet;
}

bool OAIPost_sendVenue_request::is_protect_content_Valid() const{
    return m_protect_content_isValid;
}

bool OAIPost_sendVenue_request::isAllowPaidBroadcast() const {
    return m_allow_paid_broadcast;
}
void OAIPost_sendVenue_request::setAllowPaidBroadcast(const bool &allow_paid_broadcast) {
    m_allow_paid_broadcast = allow_paid_broadcast;
    m_allow_paid_broadcast_isSet = true;
}

bool OAIPost_sendVenue_request::is_allow_paid_broadcast_Set() const{
    return m_allow_paid_broadcast_isSet;
}

bool OAIPost_sendVenue_request::is_allow_paid_broadcast_Valid() const{
    return m_allow_paid_broadcast_isValid;
}

QString OAIPost_sendVenue_request::getMessageEffectId() const {
    return m_message_effect_id;
}
void OAIPost_sendVenue_request::setMessageEffectId(const QString &message_effect_id) {
    m_message_effect_id = message_effect_id;
    m_message_effect_id_isSet = true;
}

bool OAIPost_sendVenue_request::is_message_effect_id_Set() const{
    return m_message_effect_id_isSet;
}

bool OAIPost_sendVenue_request::is_message_effect_id_Valid() const{
    return m_message_effect_id_isValid;
}

OAIReplyParameters OAIPost_sendVenue_request::getReplyParameters() const {
    return m_reply_parameters;
}
void OAIPost_sendVenue_request::setReplyParameters(const OAIReplyParameters &reply_parameters) {
    m_reply_parameters = reply_parameters;
    m_reply_parameters_isSet = true;
}

bool OAIPost_sendVenue_request::is_reply_parameters_Set() const{
    return m_reply_parameters_isSet;
}

bool OAIPost_sendVenue_request::is_reply_parameters_Valid() const{
    return m_reply_parameters_isValid;
}

OAIPost_sendMessage_request_reply_markup OAIPost_sendVenue_request::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIPost_sendVenue_request::setReplyMarkup(const OAIPost_sendMessage_request_reply_markup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIPost_sendVenue_request::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIPost_sendVenue_request::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAIPost_sendVenue_request::isSet() const {
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

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_address_isSet) {
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

        if (m_foursquare_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_foursquare_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_google_place_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_google_place_type_isSet) {
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

bool OAIPost_sendVenue_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_latitude_isValid && m_longitude_isValid && m_title_isValid && m_address_isValid && true;
}

} // namespace tele_rest
