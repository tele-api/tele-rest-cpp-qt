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

#include "OAIPassportData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPassportData::OAIPassportData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPassportData::OAIPassportData() {
    this->initializeModel();
}

OAIPassportData::~OAIPassportData() {}

void OAIPassportData::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;

    m_credentials_isSet = false;
    m_credentials_isValid = false;
}

void OAIPassportData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPassportData::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::tele_rest::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_credentials_isValid = ::tele_rest::fromJsonValue(m_credentials, json[QString("credentials")]);
    m_credentials_isSet = !json[QString("credentials")].isNull() && m_credentials_isValid;
}

QString OAIPassportData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPassportData::asJsonObject() const {
    QJsonObject obj;
    if (m_data.size() > 0) {
        obj.insert(QString("data"), ::tele_rest::toJsonValue(m_data));
    }
    if (m_credentials.isSet()) {
        obj.insert(QString("credentials"), ::tele_rest::toJsonValue(m_credentials));
    }
    return obj;
}

QList<OAIEncryptedPassportElement> OAIPassportData::getData() const {
    return m_data;
}
void OAIPassportData::setData(const QList<OAIEncryptedPassportElement> &data) {
    m_data = data;
    m_data_isSet = true;
}

bool OAIPassportData::is_data_Set() const{
    return m_data_isSet;
}

bool OAIPassportData::is_data_Valid() const{
    return m_data_isValid;
}

OAIEncryptedCredentials OAIPassportData::getCredentials() const {
    return m_credentials;
}
void OAIPassportData::setCredentials(const OAIEncryptedCredentials &credentials) {
    m_credentials = credentials;
    m_credentials_isSet = true;
}

bool OAIPassportData::is_credentials_Set() const{
    return m_credentials_isSet;
}

bool OAIPassportData::is_credentials_Valid() const{
    return m_credentials_isValid;
}

bool OAIPassportData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_data.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_credentials.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPassportData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_data_isValid && m_credentials_isValid && true;
}

} // namespace tele_rest
