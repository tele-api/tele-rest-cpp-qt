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

#include "OAIInlineQueryResultLocation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineQueryResultLocation::OAIInlineQueryResultLocation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineQueryResultLocation::OAIInlineQueryResultLocation() {
    this->initializeModel();
}

OAIInlineQueryResultLocation::~OAIInlineQueryResultLocation() {}

void OAIInlineQueryResultLocation::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_horizontal_accuracy_isSet = false;
    m_horizontal_accuracy_isValid = false;

    m_live_period_isSet = false;
    m_live_period_isValid = false;

    m_heading_isSet = false;
    m_heading_isValid = false;

    m_proximity_alert_radius_isSet = false;
    m_proximity_alert_radius_isValid = false;

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

void OAIInlineQueryResultLocation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineQueryResultLocation::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_horizontal_accuracy_isValid = ::tele_rest::fromJsonValue(m_horizontal_accuracy, json[QString("horizontal_accuracy")]);
    m_horizontal_accuracy_isSet = !json[QString("horizontal_accuracy")].isNull() && m_horizontal_accuracy_isValid;

    m_live_period_isValid = ::tele_rest::fromJsonValue(m_live_period, json[QString("live_period")]);
    m_live_period_isSet = !json[QString("live_period")].isNull() && m_live_period_isValid;

    m_heading_isValid = ::tele_rest::fromJsonValue(m_heading, json[QString("heading")]);
    m_heading_isSet = !json[QString("heading")].isNull() && m_heading_isValid;

    m_proximity_alert_radius_isValid = ::tele_rest::fromJsonValue(m_proximity_alert_radius, json[QString("proximity_alert_radius")]);
    m_proximity_alert_radius_isSet = !json[QString("proximity_alert_radius")].isNull() && m_proximity_alert_radius_isValid;

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

QString OAIInlineQueryResultLocation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineQueryResultLocation::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
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

QString OAIInlineQueryResultLocation::getType() const {
    return m_type;
}
void OAIInlineQueryResultLocation::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInlineQueryResultLocation::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInlineQueryResultLocation::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInlineQueryResultLocation::getId() const {
    return m_id;
}
void OAIInlineQueryResultLocation::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInlineQueryResultLocation::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInlineQueryResultLocation::is_id_Valid() const{
    return m_id_isValid;
}

double OAIInlineQueryResultLocation::getLatitude() const {
    return m_latitude;
}
void OAIInlineQueryResultLocation::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAIInlineQueryResultLocation::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAIInlineQueryResultLocation::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAIInlineQueryResultLocation::getLongitude() const {
    return m_longitude;
}
void OAIInlineQueryResultLocation::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAIInlineQueryResultLocation::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAIInlineQueryResultLocation::is_longitude_Valid() const{
    return m_longitude_isValid;
}

QString OAIInlineQueryResultLocation::getTitle() const {
    return m_title;
}
void OAIInlineQueryResultLocation::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIInlineQueryResultLocation::is_title_Set() const{
    return m_title_isSet;
}

bool OAIInlineQueryResultLocation::is_title_Valid() const{
    return m_title_isValid;
}

double OAIInlineQueryResultLocation::getHorizontalAccuracy() const {
    return m_horizontal_accuracy;
}
void OAIInlineQueryResultLocation::setHorizontalAccuracy(const double &horizontal_accuracy) {
    m_horizontal_accuracy = horizontal_accuracy;
    m_horizontal_accuracy_isSet = true;
}

bool OAIInlineQueryResultLocation::is_horizontal_accuracy_Set() const{
    return m_horizontal_accuracy_isSet;
}

bool OAIInlineQueryResultLocation::is_horizontal_accuracy_Valid() const{
    return m_horizontal_accuracy_isValid;
}

qint32 OAIInlineQueryResultLocation::getLivePeriod() const {
    return m_live_period;
}
void OAIInlineQueryResultLocation::setLivePeriod(const qint32 &live_period) {
    m_live_period = live_period;
    m_live_period_isSet = true;
}

bool OAIInlineQueryResultLocation::is_live_period_Set() const{
    return m_live_period_isSet;
}

bool OAIInlineQueryResultLocation::is_live_period_Valid() const{
    return m_live_period_isValid;
}

qint32 OAIInlineQueryResultLocation::getHeading() const {
    return m_heading;
}
void OAIInlineQueryResultLocation::setHeading(const qint32 &heading) {
    m_heading = heading;
    m_heading_isSet = true;
}

bool OAIInlineQueryResultLocation::is_heading_Set() const{
    return m_heading_isSet;
}

bool OAIInlineQueryResultLocation::is_heading_Valid() const{
    return m_heading_isValid;
}

qint32 OAIInlineQueryResultLocation::getProximityAlertRadius() const {
    return m_proximity_alert_radius;
}
void OAIInlineQueryResultLocation::setProximityAlertRadius(const qint32 &proximity_alert_radius) {
    m_proximity_alert_radius = proximity_alert_radius;
    m_proximity_alert_radius_isSet = true;
}

bool OAIInlineQueryResultLocation::is_proximity_alert_radius_Set() const{
    return m_proximity_alert_radius_isSet;
}

bool OAIInlineQueryResultLocation::is_proximity_alert_radius_Valid() const{
    return m_proximity_alert_radius_isValid;
}

OAIInlineKeyboardMarkup OAIInlineQueryResultLocation::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIInlineQueryResultLocation::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIInlineQueryResultLocation::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIInlineQueryResultLocation::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

OAIInputMessageContent OAIInlineQueryResultLocation::getInputMessageContent() const {
    return m_input_message_content;
}
void OAIInlineQueryResultLocation::setInputMessageContent(const OAIInputMessageContent &input_message_content) {
    m_input_message_content = input_message_content;
    m_input_message_content_isSet = true;
}

bool OAIInlineQueryResultLocation::is_input_message_content_Set() const{
    return m_input_message_content_isSet;
}

bool OAIInlineQueryResultLocation::is_input_message_content_Valid() const{
    return m_input_message_content_isValid;
}

QString OAIInlineQueryResultLocation::getThumbnailUrl() const {
    return m_thumbnail_url;
}
void OAIInlineQueryResultLocation::setThumbnailUrl(const QString &thumbnail_url) {
    m_thumbnail_url = thumbnail_url;
    m_thumbnail_url_isSet = true;
}

bool OAIInlineQueryResultLocation::is_thumbnail_url_Set() const{
    return m_thumbnail_url_isSet;
}

bool OAIInlineQueryResultLocation::is_thumbnail_url_Valid() const{
    return m_thumbnail_url_isValid;
}

qint32 OAIInlineQueryResultLocation::getThumbnailWidth() const {
    return m_thumbnail_width;
}
void OAIInlineQueryResultLocation::setThumbnailWidth(const qint32 &thumbnail_width) {
    m_thumbnail_width = thumbnail_width;
    m_thumbnail_width_isSet = true;
}

bool OAIInlineQueryResultLocation::is_thumbnail_width_Set() const{
    return m_thumbnail_width_isSet;
}

bool OAIInlineQueryResultLocation::is_thumbnail_width_Valid() const{
    return m_thumbnail_width_isValid;
}

qint32 OAIInlineQueryResultLocation::getThumbnailHeight() const {
    return m_thumbnail_height;
}
void OAIInlineQueryResultLocation::setThumbnailHeight(const qint32 &thumbnail_height) {
    m_thumbnail_height = thumbnail_height;
    m_thumbnail_height_isSet = true;
}

bool OAIInlineQueryResultLocation::is_thumbnail_height_Set() const{
    return m_thumbnail_height_isSet;
}

bool OAIInlineQueryResultLocation::is_thumbnail_height_Valid() const{
    return m_thumbnail_height_isValid;
}

bool OAIInlineQueryResultLocation::isSet() const {
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

bool OAIInlineQueryResultLocation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_latitude_isValid && m_longitude_isValid && m_title_isValid && true;
}

} // namespace tele_rest
