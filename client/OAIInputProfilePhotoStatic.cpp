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

#include "OAIInputProfilePhotoStatic.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInputProfilePhotoStatic::OAIInputProfilePhotoStatic(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInputProfilePhotoStatic::OAIInputProfilePhotoStatic() {
    this->initializeModel();
}

OAIInputProfilePhotoStatic::~OAIInputProfilePhotoStatic() {}

void OAIInputProfilePhotoStatic::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_photo_isSet = false;
    m_photo_isValid = false;
}

void OAIInputProfilePhotoStatic::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInputProfilePhotoStatic::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_photo_isValid = ::tele_rest::fromJsonValue(m_photo, json[QString("photo")]);
    m_photo_isSet = !json[QString("photo")].isNull() && m_photo_isValid;
}

QString OAIInputProfilePhotoStatic::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInputProfilePhotoStatic::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_photo_isSet) {
        obj.insert(QString("photo"), ::tele_rest::toJsonValue(m_photo));
    }
    return obj;
}

QString OAIInputProfilePhotoStatic::getType() const {
    return m_type;
}
void OAIInputProfilePhotoStatic::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInputProfilePhotoStatic::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInputProfilePhotoStatic::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInputProfilePhotoStatic::getPhoto() const {
    return m_photo;
}
void OAIInputProfilePhotoStatic::setPhoto(const QString &photo) {
    m_photo = photo;
    m_photo_isSet = true;
}

bool OAIInputProfilePhotoStatic::is_photo_Set() const{
    return m_photo_isSet;
}

bool OAIInputProfilePhotoStatic::is_photo_Valid() const{
    return m_photo_isValid;
}

bool OAIInputProfilePhotoStatic::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInputProfilePhotoStatic::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_photo_isValid && true;
}

} // namespace tele_rest
