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

#include "OAIEncryptedPassportElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIEncryptedPassportElement::OAIEncryptedPassportElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEncryptedPassportElement::OAIEncryptedPassportElement() {
    this->initializeModel();
}

OAIEncryptedPassportElement::~OAIEncryptedPassportElement() {}

void OAIEncryptedPassportElement::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_hash_isSet = false;
    m_hash_isValid = false;

    m_data_isSet = false;
    m_data_isValid = false;

    m_phone_number_isSet = false;
    m_phone_number_isValid = false;

    m_email_isSet = false;
    m_email_isValid = false;

    m_files_isSet = false;
    m_files_isValid = false;

    m_front_side_isSet = false;
    m_front_side_isValid = false;

    m_reverse_side_isSet = false;
    m_reverse_side_isValid = false;

    m_selfie_isSet = false;
    m_selfie_isValid = false;

    m_translation_isSet = false;
    m_translation_isValid = false;
}

void OAIEncryptedPassportElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEncryptedPassportElement::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_hash_isValid = ::tele_rest::fromJsonValue(m_hash, json[QString("hash")]);
    m_hash_isSet = !json[QString("hash")].isNull() && m_hash_isValid;

    m_data_isValid = ::tele_rest::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_phone_number_isValid = ::tele_rest::fromJsonValue(m_phone_number, json[QString("phone_number")]);
    m_phone_number_isSet = !json[QString("phone_number")].isNull() && m_phone_number_isValid;

    m_email_isValid = ::tele_rest::fromJsonValue(m_email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_files_isValid = ::tele_rest::fromJsonValue(m_files, json[QString("files")]);
    m_files_isSet = !json[QString("files")].isNull() && m_files_isValid;

    m_front_side_isValid = ::tele_rest::fromJsonValue(m_front_side, json[QString("front_side")]);
    m_front_side_isSet = !json[QString("front_side")].isNull() && m_front_side_isValid;

    m_reverse_side_isValid = ::tele_rest::fromJsonValue(m_reverse_side, json[QString("reverse_side")]);
    m_reverse_side_isSet = !json[QString("reverse_side")].isNull() && m_reverse_side_isValid;

    m_selfie_isValid = ::tele_rest::fromJsonValue(m_selfie, json[QString("selfie")]);
    m_selfie_isSet = !json[QString("selfie")].isNull() && m_selfie_isValid;

    m_translation_isValid = ::tele_rest::fromJsonValue(m_translation, json[QString("translation")]);
    m_translation_isSet = !json[QString("translation")].isNull() && m_translation_isValid;
}

QString OAIEncryptedPassportElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEncryptedPassportElement::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_hash_isSet) {
        obj.insert(QString("hash"), ::tele_rest::toJsonValue(m_hash));
    }
    if (m_data_isSet) {
        obj.insert(QString("data"), ::tele_rest::toJsonValue(m_data));
    }
    if (m_phone_number_isSet) {
        obj.insert(QString("phone_number"), ::tele_rest::toJsonValue(m_phone_number));
    }
    if (m_email_isSet) {
        obj.insert(QString("email"), ::tele_rest::toJsonValue(m_email));
    }
    if (m_files.size() > 0) {
        obj.insert(QString("files"), ::tele_rest::toJsonValue(m_files));
    }
    if (m_front_side.isSet()) {
        obj.insert(QString("front_side"), ::tele_rest::toJsonValue(m_front_side));
    }
    if (m_reverse_side.isSet()) {
        obj.insert(QString("reverse_side"), ::tele_rest::toJsonValue(m_reverse_side));
    }
    if (m_selfie.isSet()) {
        obj.insert(QString("selfie"), ::tele_rest::toJsonValue(m_selfie));
    }
    if (m_translation.size() > 0) {
        obj.insert(QString("translation"), ::tele_rest::toJsonValue(m_translation));
    }
    return obj;
}

QString OAIEncryptedPassportElement::getType() const {
    return m_type;
}
void OAIEncryptedPassportElement::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIEncryptedPassportElement::is_type_Set() const{
    return m_type_isSet;
}

bool OAIEncryptedPassportElement::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIEncryptedPassportElement::getHash() const {
    return m_hash;
}
void OAIEncryptedPassportElement::setHash(const QString &hash) {
    m_hash = hash;
    m_hash_isSet = true;
}

bool OAIEncryptedPassportElement::is_hash_Set() const{
    return m_hash_isSet;
}

bool OAIEncryptedPassportElement::is_hash_Valid() const{
    return m_hash_isValid;
}

QString OAIEncryptedPassportElement::getData() const {
    return m_data;
}
void OAIEncryptedPassportElement::setData(const QString &data) {
    m_data = data;
    m_data_isSet = true;
}

bool OAIEncryptedPassportElement::is_data_Set() const{
    return m_data_isSet;
}

bool OAIEncryptedPassportElement::is_data_Valid() const{
    return m_data_isValid;
}

QString OAIEncryptedPassportElement::getPhoneNumber() const {
    return m_phone_number;
}
void OAIEncryptedPassportElement::setPhoneNumber(const QString &phone_number) {
    m_phone_number = phone_number;
    m_phone_number_isSet = true;
}

bool OAIEncryptedPassportElement::is_phone_number_Set() const{
    return m_phone_number_isSet;
}

bool OAIEncryptedPassportElement::is_phone_number_Valid() const{
    return m_phone_number_isValid;
}

QString OAIEncryptedPassportElement::getEmail() const {
    return m_email;
}
void OAIEncryptedPassportElement::setEmail(const QString &email) {
    m_email = email;
    m_email_isSet = true;
}

bool OAIEncryptedPassportElement::is_email_Set() const{
    return m_email_isSet;
}

bool OAIEncryptedPassportElement::is_email_Valid() const{
    return m_email_isValid;
}

QList<OAIPassportFile> OAIEncryptedPassportElement::getFiles() const {
    return m_files;
}
void OAIEncryptedPassportElement::setFiles(const QList<OAIPassportFile> &files) {
    m_files = files;
    m_files_isSet = true;
}

bool OAIEncryptedPassportElement::is_files_Set() const{
    return m_files_isSet;
}

bool OAIEncryptedPassportElement::is_files_Valid() const{
    return m_files_isValid;
}

OAIPassportFile OAIEncryptedPassportElement::getFrontSide() const {
    return m_front_side;
}
void OAIEncryptedPassportElement::setFrontSide(const OAIPassportFile &front_side) {
    m_front_side = front_side;
    m_front_side_isSet = true;
}

bool OAIEncryptedPassportElement::is_front_side_Set() const{
    return m_front_side_isSet;
}

bool OAIEncryptedPassportElement::is_front_side_Valid() const{
    return m_front_side_isValid;
}

OAIPassportFile OAIEncryptedPassportElement::getReverseSide() const {
    return m_reverse_side;
}
void OAIEncryptedPassportElement::setReverseSide(const OAIPassportFile &reverse_side) {
    m_reverse_side = reverse_side;
    m_reverse_side_isSet = true;
}

bool OAIEncryptedPassportElement::is_reverse_side_Set() const{
    return m_reverse_side_isSet;
}

bool OAIEncryptedPassportElement::is_reverse_side_Valid() const{
    return m_reverse_side_isValid;
}

OAIPassportFile OAIEncryptedPassportElement::getSelfie() const {
    return m_selfie;
}
void OAIEncryptedPassportElement::setSelfie(const OAIPassportFile &selfie) {
    m_selfie = selfie;
    m_selfie_isSet = true;
}

bool OAIEncryptedPassportElement::is_selfie_Set() const{
    return m_selfie_isSet;
}

bool OAIEncryptedPassportElement::is_selfie_Valid() const{
    return m_selfie_isValid;
}

QList<OAIPassportFile> OAIEncryptedPassportElement::getTranslation() const {
    return m_translation;
}
void OAIEncryptedPassportElement::setTranslation(const QList<OAIPassportFile> &translation) {
    m_translation = translation;
    m_translation_isSet = true;
}

bool OAIEncryptedPassportElement::is_translation_Set() const{
    return m_translation_isSet;
}

bool OAIEncryptedPassportElement::is_translation_Valid() const{
    return m_translation_isValid;
}

bool OAIEncryptedPassportElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_data_isSet) {
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

        if (m_files.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_front_side.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_reverse_side.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_selfie.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_translation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEncryptedPassportElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_hash_isValid && true;
}

} // namespace tele_rest
