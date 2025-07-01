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

#include "OAIChatLocation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatLocation::OAIChatLocation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatLocation::OAIChatLocation() {
    this->initializeModel();
}

OAIChatLocation::~OAIChatLocation() {}

void OAIChatLocation::initializeModel() {

    m_location_isSet = false;
    m_location_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;
}

void OAIChatLocation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatLocation::fromJsonObject(QJsonObject json) {

    m_location_isValid = ::tele_rest::fromJsonValue(m_location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;

    m_address_isValid = ::tele_rest::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;
}

QString OAIChatLocation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatLocation::asJsonObject() const {
    QJsonObject obj;
    if (m_location.isSet()) {
        obj.insert(QString("location"), ::tele_rest::toJsonValue(m_location));
    }
    if (m_address_isSet) {
        obj.insert(QString("address"), ::tele_rest::toJsonValue(m_address));
    }
    return obj;
}

OAILocation OAIChatLocation::getLocation() const {
    return m_location;
}
void OAIChatLocation::setLocation(const OAILocation &location) {
    m_location = location;
    m_location_isSet = true;
}

bool OAIChatLocation::is_location_Set() const{
    return m_location_isSet;
}

bool OAIChatLocation::is_location_Valid() const{
    return m_location_isValid;
}

QString OAIChatLocation::getAddress() const {
    return m_address;
}
void OAIChatLocation::setAddress(const QString &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAIChatLocation::is_address_Set() const{
    return m_address_isSet;
}

bool OAIChatLocation::is_address_Valid() const{
    return m_address_isValid;
}

bool OAIChatLocation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_address_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatLocation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_location_isValid && m_address_isValid && true;
}

} // namespace tele_rest
