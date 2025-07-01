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

#include "OAIShippingAddress.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIShippingAddress::OAIShippingAddress(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIShippingAddress::OAIShippingAddress() {
    this->initializeModel();
}

OAIShippingAddress::~OAIShippingAddress() {}

void OAIShippingAddress::initializeModel() {

    m_country_code_isSet = false;
    m_country_code_isValid = false;

    m_state_isSet = false;
    m_state_isValid = false;

    m_city_isSet = false;
    m_city_isValid = false;

    m_street_line1_isSet = false;
    m_street_line1_isValid = false;

    m_street_line2_isSet = false;
    m_street_line2_isValid = false;

    m_post_code_isSet = false;
    m_post_code_isValid = false;
}

void OAIShippingAddress::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIShippingAddress::fromJsonObject(QJsonObject json) {

    m_country_code_isValid = ::tele_rest::fromJsonValue(m_country_code, json[QString("country_code")]);
    m_country_code_isSet = !json[QString("country_code")].isNull() && m_country_code_isValid;

    m_state_isValid = ::tele_rest::fromJsonValue(m_state, json[QString("state")]);
    m_state_isSet = !json[QString("state")].isNull() && m_state_isValid;

    m_city_isValid = ::tele_rest::fromJsonValue(m_city, json[QString("city")]);
    m_city_isSet = !json[QString("city")].isNull() && m_city_isValid;

    m_street_line1_isValid = ::tele_rest::fromJsonValue(m_street_line1, json[QString("street_line1")]);
    m_street_line1_isSet = !json[QString("street_line1")].isNull() && m_street_line1_isValid;

    m_street_line2_isValid = ::tele_rest::fromJsonValue(m_street_line2, json[QString("street_line2")]);
    m_street_line2_isSet = !json[QString("street_line2")].isNull() && m_street_line2_isValid;

    m_post_code_isValid = ::tele_rest::fromJsonValue(m_post_code, json[QString("post_code")]);
    m_post_code_isSet = !json[QString("post_code")].isNull() && m_post_code_isValid;
}

QString OAIShippingAddress::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIShippingAddress::asJsonObject() const {
    QJsonObject obj;
    if (m_country_code_isSet) {
        obj.insert(QString("country_code"), ::tele_rest::toJsonValue(m_country_code));
    }
    if (m_state_isSet) {
        obj.insert(QString("state"), ::tele_rest::toJsonValue(m_state));
    }
    if (m_city_isSet) {
        obj.insert(QString("city"), ::tele_rest::toJsonValue(m_city));
    }
    if (m_street_line1_isSet) {
        obj.insert(QString("street_line1"), ::tele_rest::toJsonValue(m_street_line1));
    }
    if (m_street_line2_isSet) {
        obj.insert(QString("street_line2"), ::tele_rest::toJsonValue(m_street_line2));
    }
    if (m_post_code_isSet) {
        obj.insert(QString("post_code"), ::tele_rest::toJsonValue(m_post_code));
    }
    return obj;
}

QString OAIShippingAddress::getCountryCode() const {
    return m_country_code;
}
void OAIShippingAddress::setCountryCode(const QString &country_code) {
    m_country_code = country_code;
    m_country_code_isSet = true;
}

bool OAIShippingAddress::is_country_code_Set() const{
    return m_country_code_isSet;
}

bool OAIShippingAddress::is_country_code_Valid() const{
    return m_country_code_isValid;
}

QString OAIShippingAddress::getState() const {
    return m_state;
}
void OAIShippingAddress::setState(const QString &state) {
    m_state = state;
    m_state_isSet = true;
}

bool OAIShippingAddress::is_state_Set() const{
    return m_state_isSet;
}

bool OAIShippingAddress::is_state_Valid() const{
    return m_state_isValid;
}

QString OAIShippingAddress::getCity() const {
    return m_city;
}
void OAIShippingAddress::setCity(const QString &city) {
    m_city = city;
    m_city_isSet = true;
}

bool OAIShippingAddress::is_city_Set() const{
    return m_city_isSet;
}

bool OAIShippingAddress::is_city_Valid() const{
    return m_city_isValid;
}

QString OAIShippingAddress::getStreetLine1() const {
    return m_street_line1;
}
void OAIShippingAddress::setStreetLine1(const QString &street_line1) {
    m_street_line1 = street_line1;
    m_street_line1_isSet = true;
}

bool OAIShippingAddress::is_street_line1_Set() const{
    return m_street_line1_isSet;
}

bool OAIShippingAddress::is_street_line1_Valid() const{
    return m_street_line1_isValid;
}

QString OAIShippingAddress::getStreetLine2() const {
    return m_street_line2;
}
void OAIShippingAddress::setStreetLine2(const QString &street_line2) {
    m_street_line2 = street_line2;
    m_street_line2_isSet = true;
}

bool OAIShippingAddress::is_street_line2_Set() const{
    return m_street_line2_isSet;
}

bool OAIShippingAddress::is_street_line2_Valid() const{
    return m_street_line2_isValid;
}

QString OAIShippingAddress::getPostCode() const {
    return m_post_code;
}
void OAIShippingAddress::setPostCode(const QString &post_code) {
    m_post_code = post_code;
    m_post_code_isSet = true;
}

bool OAIShippingAddress::is_post_code_Set() const{
    return m_post_code_isSet;
}

bool OAIShippingAddress::is_post_code_Valid() const{
    return m_post_code_isValid;
}

bool OAIShippingAddress::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_country_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_state_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_city_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_street_line1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_street_line2_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_post_code_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIShippingAddress::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_country_code_isValid && m_state_isValid && m_city_isValid && m_street_line1_isValid && m_street_line2_isValid && m_post_code_isValid && true;
}

} // namespace tele_rest
