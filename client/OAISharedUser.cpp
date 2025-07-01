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

#include "OAISharedUser.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISharedUser::OAISharedUser(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISharedUser::OAISharedUser() {
    this->initializeModel();
}

OAISharedUser::~OAISharedUser() {}

void OAISharedUser::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;

    m_photo_isSet = false;
    m_photo_isValid = false;
}

void OAISharedUser::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISharedUser::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_first_name_isValid = ::tele_rest::fromJsonValue(m_first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_last_name_isValid = ::tele_rest::fromJsonValue(m_last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_username_isValid = ::tele_rest::fromJsonValue(m_username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_photo_isValid = ::tele_rest::fromJsonValue(m_photo, json[QString("photo")]);
    m_photo_isSet = !json[QString("photo")].isNull() && m_photo_isValid;
}

QString OAISharedUser::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISharedUser::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::tele_rest::toJsonValue(m_first_name));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::tele_rest::toJsonValue(m_last_name));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::tele_rest::toJsonValue(m_username));
    }
    if (m_photo.size() > 0) {
        obj.insert(QString("photo"), ::tele_rest::toJsonValue(m_photo));
    }
    return obj;
}

qint32 OAISharedUser::getUserId() const {
    return m_user_id;
}
void OAISharedUser::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAISharedUser::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAISharedUser::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString OAISharedUser::getFirstName() const {
    return m_first_name;
}
void OAISharedUser::setFirstName(const QString &first_name) {
    m_first_name = first_name;
    m_first_name_isSet = true;
}

bool OAISharedUser::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAISharedUser::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAISharedUser::getLastName() const {
    return m_last_name;
}
void OAISharedUser::setLastName(const QString &last_name) {
    m_last_name = last_name;
    m_last_name_isSet = true;
}

bool OAISharedUser::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAISharedUser::is_last_name_Valid() const{
    return m_last_name_isValid;
}

QString OAISharedUser::getUsername() const {
    return m_username;
}
void OAISharedUser::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAISharedUser::is_username_Set() const{
    return m_username_isSet;
}

bool OAISharedUser::is_username_Valid() const{
    return m_username_isValid;
}

QList<OAIPhotoSize> OAISharedUser::getPhoto() const {
    return m_photo;
}
void OAISharedUser::setPhoto(const QList<OAIPhotoSize> &photo) {
    m_photo = photo;
    m_photo_isSet = true;
}

bool OAISharedUser::is_photo_Set() const{
    return m_photo_isSet;
}

bool OAISharedUser::is_photo_Valid() const{
    return m_photo_isValid;
}

bool OAISharedUser::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
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

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISharedUser::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && true;
}

} // namespace tele_rest
