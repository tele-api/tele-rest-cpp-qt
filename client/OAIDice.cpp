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

#include "OAIDice.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIDice::OAIDice(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDice::OAIDice() {
    this->initializeModel();
}

OAIDice::~OAIDice() {}

void OAIDice::initializeModel() {

    m_emoji_isSet = false;
    m_emoji_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;
}

void OAIDice::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDice::fromJsonObject(QJsonObject json) {

    m_emoji_isValid = ::tele_rest::fromJsonValue(m_emoji, json[QString("emoji")]);
    m_emoji_isSet = !json[QString("emoji")].isNull() && m_emoji_isValid;

    m_value_isValid = ::tele_rest::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;
}

QString OAIDice::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDice::asJsonObject() const {
    QJsonObject obj;
    if (m_emoji_isSet) {
        obj.insert(QString("emoji"), ::tele_rest::toJsonValue(m_emoji));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::tele_rest::toJsonValue(m_value));
    }
    return obj;
}

QString OAIDice::getEmoji() const {
    return m_emoji;
}
void OAIDice::setEmoji(const QString &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAIDice::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAIDice::is_emoji_Valid() const{
    return m_emoji_isValid;
}

qint32 OAIDice::getValue() const {
    return m_value;
}
void OAIDice::setValue(const qint32 &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAIDice::is_value_Set() const{
    return m_value_isSet;
}

bool OAIDice::is_value_Valid() const{
    return m_value_isValid;
}

bool OAIDice::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_emoji_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDice::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_emoji_isValid && m_value_isValid && true;
}

} // namespace tele_rest
