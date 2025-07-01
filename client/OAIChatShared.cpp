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

#include "OAIChatShared.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatShared::OAIChatShared(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatShared::OAIChatShared() {
    this->initializeModel();
}

OAIChatShared::~OAIChatShared() {}

void OAIChatShared::initializeModel() {

    m_request_id_isSet = false;
    m_request_id_isValid = false;

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;

    m_photo_isSet = false;
    m_photo_isValid = false;
}

void OAIChatShared::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatShared::fromJsonObject(QJsonObject json) {

    m_request_id_isValid = ::tele_rest::fromJsonValue(m_request_id, json[QString("request_id")]);
    m_request_id_isSet = !json[QString("request_id")].isNull() && m_request_id_isValid;

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_username_isValid = ::tele_rest::fromJsonValue(m_username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_photo_isValid = ::tele_rest::fromJsonValue(m_photo, json[QString("photo")]);
    m_photo_isSet = !json[QString("photo")].isNull() && m_photo_isValid;
}

QString OAIChatShared::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatShared::asJsonObject() const {
    QJsonObject obj;
    if (m_request_id_isSet) {
        obj.insert(QString("request_id"), ::tele_rest::toJsonValue(m_request_id));
    }
    if (m_chat_id_isSet) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::tele_rest::toJsonValue(m_username));
    }
    if (m_photo.size() > 0) {
        obj.insert(QString("photo"), ::tele_rest::toJsonValue(m_photo));
    }
    return obj;
}

qint32 OAIChatShared::getRequestId() const {
    return m_request_id;
}
void OAIChatShared::setRequestId(const qint32 &request_id) {
    m_request_id = request_id;
    m_request_id_isSet = true;
}

bool OAIChatShared::is_request_id_Set() const{
    return m_request_id_isSet;
}

bool OAIChatShared::is_request_id_Valid() const{
    return m_request_id_isValid;
}

qint32 OAIChatShared::getChatId() const {
    return m_chat_id;
}
void OAIChatShared::setChatId(const qint32 &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIChatShared::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIChatShared::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

QString OAIChatShared::getTitle() const {
    return m_title;
}
void OAIChatShared::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIChatShared::is_title_Set() const{
    return m_title_isSet;
}

bool OAIChatShared::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIChatShared::getUsername() const {
    return m_username;
}
void OAIChatShared::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAIChatShared::is_username_Set() const{
    return m_username_isSet;
}

bool OAIChatShared::is_username_Valid() const{
    return m_username_isValid;
}

QList<OAIPhotoSize> OAIChatShared::getPhoto() const {
    return m_photo;
}
void OAIChatShared::setPhoto(const QList<OAIPhotoSize> &photo) {
    m_photo = photo;
    m_photo_isSet = true;
}

bool OAIChatShared::is_photo_Set() const{
    return m_photo_isSet;
}

bool OAIChatShared::is_photo_Valid() const{
    return m_photo_isValid;
}

bool OAIChatShared::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_request_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
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

bool OAIChatShared::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_request_id_isValid && m_chat_id_isValid && true;
}

} // namespace tele_rest
