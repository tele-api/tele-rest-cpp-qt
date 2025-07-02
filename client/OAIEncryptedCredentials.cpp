/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIEncryptedCredentials.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIEncryptedCredentials::OAIEncryptedCredentials(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEncryptedCredentials::OAIEncryptedCredentials() {
    this->initializeModel();
}

OAIEncryptedCredentials::~OAIEncryptedCredentials() {}

void OAIEncryptedCredentials::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;

    m_hash_isSet = false;
    m_hash_isValid = false;

    m_secret_isSet = false;
    m_secret_isValid = false;
}

void OAIEncryptedCredentials::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEncryptedCredentials::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::tele_rest::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_hash_isValid = ::tele_rest::fromJsonValue(m_hash, json[QString("hash")]);
    m_hash_isSet = !json[QString("hash")].isNull() && m_hash_isValid;

    m_secret_isValid = ::tele_rest::fromJsonValue(m_secret, json[QString("secret")]);
    m_secret_isSet = !json[QString("secret")].isNull() && m_secret_isValid;
}

QString OAIEncryptedCredentials::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEncryptedCredentials::asJsonObject() const {
    QJsonObject obj;
    if (m_data_isSet) {
        obj.insert(QString("data"), ::tele_rest::toJsonValue(m_data));
    }
    if (m_hash_isSet) {
        obj.insert(QString("hash"), ::tele_rest::toJsonValue(m_hash));
    }
    if (m_secret_isSet) {
        obj.insert(QString("secret"), ::tele_rest::toJsonValue(m_secret));
    }
    return obj;
}

QString OAIEncryptedCredentials::getData() const {
    return m_data;
}
void OAIEncryptedCredentials::setData(const QString &data) {
    m_data = data;
    m_data_isSet = true;
}

bool OAIEncryptedCredentials::is_data_Set() const{
    return m_data_isSet;
}

bool OAIEncryptedCredentials::is_data_Valid() const{
    return m_data_isValid;
}

QString OAIEncryptedCredentials::getHash() const {
    return m_hash;
}
void OAIEncryptedCredentials::setHash(const QString &hash) {
    m_hash = hash;
    m_hash_isSet = true;
}

bool OAIEncryptedCredentials::is_hash_Set() const{
    return m_hash_isSet;
}

bool OAIEncryptedCredentials::is_hash_Valid() const{
    return m_hash_isValid;
}

QString OAIEncryptedCredentials::getSecret() const {
    return m_secret;
}
void OAIEncryptedCredentials::setSecret(const QString &secret) {
    m_secret = secret;
    m_secret_isSet = true;
}

bool OAIEncryptedCredentials::is_secret_Set() const{
    return m_secret_isSet;
}

bool OAIEncryptedCredentials::is_secret_Valid() const{
    return m_secret_isValid;
}

bool OAIEncryptedCredentials::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_secret_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEncryptedCredentials::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_data_isValid && m_hash_isValid && m_secret_isValid && true;
}

} // namespace tele_rest
