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

#include "OAIStoryAreaTypeLocation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIStoryAreaTypeLocation::OAIStoryAreaTypeLocation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStoryAreaTypeLocation::OAIStoryAreaTypeLocation() {
    this->initializeModel();
}

OAIStoryAreaTypeLocation::~OAIStoryAreaTypeLocation() {}

void OAIStoryAreaTypeLocation::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;
}

void OAIStoryAreaTypeLocation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStoryAreaTypeLocation::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_address_isValid = ::tele_rest::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;
}

QString OAIStoryAreaTypeLocation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStoryAreaTypeLocation::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_latitude_isSet) {
        obj.insert(QString("latitude"), ::tele_rest::toJsonValue(m_latitude));
    }
    if (m_longitude_isSet) {
        obj.insert(QString("longitude"), ::tele_rest::toJsonValue(m_longitude));
    }
    if (m_address.isSet()) {
        obj.insert(QString("address"), ::tele_rest::toJsonValue(m_address));
    }
    return obj;
}

QString OAIStoryAreaTypeLocation::getType() const {
    return m_type;
}
void OAIStoryAreaTypeLocation::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIStoryAreaTypeLocation::is_type_Set() const{
    return m_type_isSet;
}

bool OAIStoryAreaTypeLocation::is_type_Valid() const{
    return m_type_isValid;
}

double OAIStoryAreaTypeLocation::getLatitude() const {
    return m_latitude;
}
void OAIStoryAreaTypeLocation::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAIStoryAreaTypeLocation::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAIStoryAreaTypeLocation::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAIStoryAreaTypeLocation::getLongitude() const {
    return m_longitude;
}
void OAIStoryAreaTypeLocation::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAIStoryAreaTypeLocation::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAIStoryAreaTypeLocation::is_longitude_Valid() const{
    return m_longitude_isValid;
}

OAILocationAddress OAIStoryAreaTypeLocation::getAddress() const {
    return m_address;
}
void OAIStoryAreaTypeLocation::setAddress(const OAILocationAddress &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAIStoryAreaTypeLocation::is_address_Set() const{
    return m_address_isSet;
}

bool OAIStoryAreaTypeLocation::is_address_Valid() const{
    return m_address_isValid;
}

bool OAIStoryAreaTypeLocation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
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

        if (m_address.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStoryAreaTypeLocation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_latitude_isValid && m_longitude_isValid && true;
}

} // namespace tele_rest
