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

#include "OAIOrderInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIOrderInfo::OAIOrderInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderInfo::OAIOrderInfo() {
    this->initializeModel();
}

OAIOrderInfo::~OAIOrderInfo() {}

void OAIOrderInfo::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_phone_number_isSet = false;
    m_phone_number_isValid = false;

    m_email_isSet = false;
    m_email_isValid = false;

    m_shipping_address_isSet = false;
    m_shipping_address_isValid = false;
}

void OAIOrderInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderInfo::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::tele_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_phone_number_isValid = ::tele_rest::fromJsonValue(m_phone_number, json[QString("phone_number")]);
    m_phone_number_isSet = !json[QString("phone_number")].isNull() && m_phone_number_isValid;

    m_email_isValid = ::tele_rest::fromJsonValue(m_email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_shipping_address_isValid = ::tele_rest::fromJsonValue(m_shipping_address, json[QString("shipping_address")]);
    m_shipping_address_isSet = !json[QString("shipping_address")].isNull() && m_shipping_address_isValid;
}

QString OAIOrderInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::tele_rest::toJsonValue(m_name));
    }
    if (m_phone_number_isSet) {
        obj.insert(QString("phone_number"), ::tele_rest::toJsonValue(m_phone_number));
    }
    if (m_email_isSet) {
        obj.insert(QString("email"), ::tele_rest::toJsonValue(m_email));
    }
    if (m_shipping_address.isSet()) {
        obj.insert(QString("shipping_address"), ::tele_rest::toJsonValue(m_shipping_address));
    }
    return obj;
}

QString OAIOrderInfo::getName() const {
    return m_name;
}
void OAIOrderInfo::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIOrderInfo::is_name_Set() const{
    return m_name_isSet;
}

bool OAIOrderInfo::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIOrderInfo::getPhoneNumber() const {
    return m_phone_number;
}
void OAIOrderInfo::setPhoneNumber(const QString &phone_number) {
    m_phone_number = phone_number;
    m_phone_number_isSet = true;
}

bool OAIOrderInfo::is_phone_number_Set() const{
    return m_phone_number_isSet;
}

bool OAIOrderInfo::is_phone_number_Valid() const{
    return m_phone_number_isValid;
}

QString OAIOrderInfo::getEmail() const {
    return m_email;
}
void OAIOrderInfo::setEmail(const QString &email) {
    m_email = email;
    m_email_isSet = true;
}

bool OAIOrderInfo::is_email_Set() const{
    return m_email_isSet;
}

bool OAIOrderInfo::is_email_Valid() const{
    return m_email_isValid;
}

OAIShippingAddress OAIOrderInfo::getShippingAddress() const {
    return m_shipping_address;
}
void OAIOrderInfo::setShippingAddress(const OAIShippingAddress &shipping_address) {
    m_shipping_address = shipping_address;
    m_shipping_address_isSet = true;
}

bool OAIOrderInfo::is_shipping_address_Set() const{
    return m_shipping_address_isSet;
}

bool OAIOrderInfo::is_shipping_address_Valid() const{
    return m_shipping_address_isValid;
}

bool OAIOrderInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipping_address.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
