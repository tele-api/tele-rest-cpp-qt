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

#include "OAIInputLocationMessageContent.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInputLocationMessageContent::OAIInputLocationMessageContent(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInputLocationMessageContent::OAIInputLocationMessageContent() {
    this->initializeModel();
}

OAIInputLocationMessageContent::~OAIInputLocationMessageContent() {}

void OAIInputLocationMessageContent::initializeModel() {

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_horizontal_accuracy_isSet = false;
    m_horizontal_accuracy_isValid = false;

    m_live_period_isSet = false;
    m_live_period_isValid = false;

    m_heading_isSet = false;
    m_heading_isValid = false;

    m_proximity_alert_radius_isSet = false;
    m_proximity_alert_radius_isValid = false;
}

void OAIInputLocationMessageContent::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInputLocationMessageContent::fromJsonObject(QJsonObject json) {

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_horizontal_accuracy_isValid = ::tele_rest::fromJsonValue(m_horizontal_accuracy, json[QString("horizontal_accuracy")]);
    m_horizontal_accuracy_isSet = !json[QString("horizontal_accuracy")].isNull() && m_horizontal_accuracy_isValid;

    m_live_period_isValid = ::tele_rest::fromJsonValue(m_live_period, json[QString("live_period")]);
    m_live_period_isSet = !json[QString("live_period")].isNull() && m_live_period_isValid;

    m_heading_isValid = ::tele_rest::fromJsonValue(m_heading, json[QString("heading")]);
    m_heading_isSet = !json[QString("heading")].isNull() && m_heading_isValid;

    m_proximity_alert_radius_isValid = ::tele_rest::fromJsonValue(m_proximity_alert_radius, json[QString("proximity_alert_radius")]);
    m_proximity_alert_radius_isSet = !json[QString("proximity_alert_radius")].isNull() && m_proximity_alert_radius_isValid;
}

QString OAIInputLocationMessageContent::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInputLocationMessageContent::asJsonObject() const {
    QJsonObject obj;
    if (m_latitude_isSet) {
        obj.insert(QString("latitude"), ::tele_rest::toJsonValue(m_latitude));
    }
    if (m_longitude_isSet) {
        obj.insert(QString("longitude"), ::tele_rest::toJsonValue(m_longitude));
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
    return obj;
}

double OAIInputLocationMessageContent::getLatitude() const {
    return m_latitude;
}
void OAIInputLocationMessageContent::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAIInputLocationMessageContent::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAIInputLocationMessageContent::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAIInputLocationMessageContent::getLongitude() const {
    return m_longitude;
}
void OAIInputLocationMessageContent::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAIInputLocationMessageContent::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAIInputLocationMessageContent::is_longitude_Valid() const{
    return m_longitude_isValid;
}

double OAIInputLocationMessageContent::getHorizontalAccuracy() const {
    return m_horizontal_accuracy;
}
void OAIInputLocationMessageContent::setHorizontalAccuracy(const double &horizontal_accuracy) {
    m_horizontal_accuracy = horizontal_accuracy;
    m_horizontal_accuracy_isSet = true;
}

bool OAIInputLocationMessageContent::is_horizontal_accuracy_Set() const{
    return m_horizontal_accuracy_isSet;
}

bool OAIInputLocationMessageContent::is_horizontal_accuracy_Valid() const{
    return m_horizontal_accuracy_isValid;
}

qint32 OAIInputLocationMessageContent::getLivePeriod() const {
    return m_live_period;
}
void OAIInputLocationMessageContent::setLivePeriod(const qint32 &live_period) {
    m_live_period = live_period;
    m_live_period_isSet = true;
}

bool OAIInputLocationMessageContent::is_live_period_Set() const{
    return m_live_period_isSet;
}

bool OAIInputLocationMessageContent::is_live_period_Valid() const{
    return m_live_period_isValid;
}

qint32 OAIInputLocationMessageContent::getHeading() const {
    return m_heading;
}
void OAIInputLocationMessageContent::setHeading(const qint32 &heading) {
    m_heading = heading;
    m_heading_isSet = true;
}

bool OAIInputLocationMessageContent::is_heading_Set() const{
    return m_heading_isSet;
}

bool OAIInputLocationMessageContent::is_heading_Valid() const{
    return m_heading_isValid;
}

qint32 OAIInputLocationMessageContent::getProximityAlertRadius() const {
    return m_proximity_alert_radius;
}
void OAIInputLocationMessageContent::setProximityAlertRadius(const qint32 &proximity_alert_radius) {
    m_proximity_alert_radius = proximity_alert_radius;
    m_proximity_alert_radius_isSet = true;
}

bool OAIInputLocationMessageContent::is_proximity_alert_radius_Set() const{
    return m_proximity_alert_radius_isSet;
}

bool OAIInputLocationMessageContent::is_proximity_alert_radius_Valid() const{
    return m_proximity_alert_radius_isValid;
}

bool OAIInputLocationMessageContent::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIInputLocationMessageContent::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_latitude_isValid && m_longitude_isValid && true;
}

} // namespace tele_rest
