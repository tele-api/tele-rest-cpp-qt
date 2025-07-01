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

#include "OAIPreparedInlineMessage.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPreparedInlineMessage::OAIPreparedInlineMessage(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPreparedInlineMessage::OAIPreparedInlineMessage() {
    this->initializeModel();
}

OAIPreparedInlineMessage::~OAIPreparedInlineMessage() {}

void OAIPreparedInlineMessage::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_expiration_date_isSet = false;
    m_expiration_date_isValid = false;
}

void OAIPreparedInlineMessage::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPreparedInlineMessage::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_expiration_date_isValid = ::tele_rest::fromJsonValue(m_expiration_date, json[QString("expiration_date")]);
    m_expiration_date_isSet = !json[QString("expiration_date")].isNull() && m_expiration_date_isValid;
}

QString OAIPreparedInlineMessage::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPreparedInlineMessage::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_expiration_date_isSet) {
        obj.insert(QString("expiration_date"), ::tele_rest::toJsonValue(m_expiration_date));
    }
    return obj;
}

QString OAIPreparedInlineMessage::getId() const {
    return m_id;
}
void OAIPreparedInlineMessage::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIPreparedInlineMessage::is_id_Set() const{
    return m_id_isSet;
}

bool OAIPreparedInlineMessage::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIPreparedInlineMessage::getExpirationDate() const {
    return m_expiration_date;
}
void OAIPreparedInlineMessage::setExpirationDate(const qint32 &expiration_date) {
    m_expiration_date = expiration_date;
    m_expiration_date_isSet = true;
}

bool OAIPreparedInlineMessage::is_expiration_date_Set() const{
    return m_expiration_date_isSet;
}

bool OAIPreparedInlineMessage::is_expiration_date_Valid() const{
    return m_expiration_date_isValid;
}

bool OAIPreparedInlineMessage::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expiration_date_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPreparedInlineMessage::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_expiration_date_isValid && true;
}

} // namespace tele_rest
