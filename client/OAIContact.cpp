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

#include "OAIContact.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIContact::OAIContact(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContact::OAIContact() {
    this->initializeModel();
}

OAIContact::~OAIContact() {}

void OAIContact::initializeModel() {

    m_phone_number_isSet = false;
    m_phone_number_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_vcard_isSet = false;
    m_vcard_isValid = false;
}

void OAIContact::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContact::fromJsonObject(QJsonObject json) {

    m_phone_number_isValid = ::tele_rest::fromJsonValue(m_phone_number, json[QString("phone_number")]);
    m_phone_number_isSet = !json[QString("phone_number")].isNull() && m_phone_number_isValid;

    m_first_name_isValid = ::tele_rest::fromJsonValue(m_first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_last_name_isValid = ::tele_rest::fromJsonValue(m_last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_vcard_isValid = ::tele_rest::fromJsonValue(m_vcard, json[QString("vcard")]);
    m_vcard_isSet = !json[QString("vcard")].isNull() && m_vcard_isValid;
}

QString OAIContact::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContact::asJsonObject() const {
    QJsonObject obj;
    if (m_phone_number_isSet) {
        obj.insert(QString("phone_number"), ::tele_rest::toJsonValue(m_phone_number));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::tele_rest::toJsonValue(m_first_name));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::tele_rest::toJsonValue(m_last_name));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_vcard_isSet) {
        obj.insert(QString("vcard"), ::tele_rest::toJsonValue(m_vcard));
    }
    return obj;
}

QString OAIContact::getPhoneNumber() const {
    return m_phone_number;
}
void OAIContact::setPhoneNumber(const QString &phone_number) {
    m_phone_number = phone_number;
    m_phone_number_isSet = true;
}

bool OAIContact::is_phone_number_Set() const{
    return m_phone_number_isSet;
}

bool OAIContact::is_phone_number_Valid() const{
    return m_phone_number_isValid;
}

QString OAIContact::getFirstName() const {
    return m_first_name;
}
void OAIContact::setFirstName(const QString &first_name) {
    m_first_name = first_name;
    m_first_name_isSet = true;
}

bool OAIContact::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAIContact::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAIContact::getLastName() const {
    return m_last_name;
}
void OAIContact::setLastName(const QString &last_name) {
    m_last_name = last_name;
    m_last_name_isSet = true;
}

bool OAIContact::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAIContact::is_last_name_Valid() const{
    return m_last_name_isValid;
}

qint32 OAIContact::getUserId() const {
    return m_user_id;
}
void OAIContact::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIContact::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIContact::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString OAIContact::getVcard() const {
    return m_vcard;
}
void OAIContact::setVcard(const QString &vcard) {
    m_vcard = vcard;
    m_vcard_isSet = true;
}

bool OAIContact::is_vcard_Set() const{
    return m_vcard_isSet;
}

bool OAIContact::is_vcard_Valid() const{
    return m_vcard_isValid;
}

bool OAIContact::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vcard_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContact::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_phone_number_isValid && m_first_name_isValid && true;
}

} // namespace tele_rest
