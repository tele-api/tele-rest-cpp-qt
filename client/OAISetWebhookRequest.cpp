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

#include "OAISetWebhookRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISetWebhookRequest::OAISetWebhookRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISetWebhookRequest::OAISetWebhookRequest() {
    this->initializeModel();
}

OAISetWebhookRequest::~OAISetWebhookRequest() {}

void OAISetWebhookRequest::initializeModel() {

    m_url_isSet = false;
    m_url_isValid = false;

    m_certificate_isSet = false;
    m_certificate_isValid = false;

    m_ip_address_isSet = false;
    m_ip_address_isValid = false;

    m_max_connections_isSet = false;
    m_max_connections_isValid = false;

    m_allowed_updates_isSet = false;
    m_allowed_updates_isValid = false;

    m_drop_pending_updates_isSet = false;
    m_drop_pending_updates_isValid = false;

    m_secret_token_isSet = false;
    m_secret_token_isValid = false;
}

void OAISetWebhookRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISetWebhookRequest::fromJsonObject(QJsonObject json) {

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_certificate_isValid = ::tele_rest::fromJsonValue(m_certificate, json[QString("certificate")]);
    m_certificate_isSet = !json[QString("certificate")].isNull() && m_certificate_isValid;

    m_ip_address_isValid = ::tele_rest::fromJsonValue(m_ip_address, json[QString("ip_address")]);
    m_ip_address_isSet = !json[QString("ip_address")].isNull() && m_ip_address_isValid;

    m_max_connections_isValid = ::tele_rest::fromJsonValue(m_max_connections, json[QString("max_connections")]);
    m_max_connections_isSet = !json[QString("max_connections")].isNull() && m_max_connections_isValid;

    m_allowed_updates_isValid = ::tele_rest::fromJsonValue(m_allowed_updates, json[QString("allowed_updates")]);
    m_allowed_updates_isSet = !json[QString("allowed_updates")].isNull() && m_allowed_updates_isValid;

    m_drop_pending_updates_isValid = ::tele_rest::fromJsonValue(m_drop_pending_updates, json[QString("drop_pending_updates")]);
    m_drop_pending_updates_isSet = !json[QString("drop_pending_updates")].isNull() && m_drop_pending_updates_isValid;

    m_secret_token_isValid = ::tele_rest::fromJsonValue(m_secret_token, json[QString("secret_token")]);
    m_secret_token_isSet = !json[QString("secret_token")].isNull() && m_secret_token_isValid;
}

QString OAISetWebhookRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISetWebhookRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_certificate_isSet) {
        obj.insert(QString("certificate"), ::tele_rest::toJsonValue(m_certificate));
    }
    if (m_ip_address_isSet) {
        obj.insert(QString("ip_address"), ::tele_rest::toJsonValue(m_ip_address));
    }
    if (m_max_connections_isSet) {
        obj.insert(QString("max_connections"), ::tele_rest::toJsonValue(m_max_connections));
    }
    if (m_allowed_updates.size() > 0) {
        obj.insert(QString("allowed_updates"), ::tele_rest::toJsonValue(m_allowed_updates));
    }
    if (m_drop_pending_updates_isSet) {
        obj.insert(QString("drop_pending_updates"), ::tele_rest::toJsonValue(m_drop_pending_updates));
    }
    if (m_secret_token_isSet) {
        obj.insert(QString("secret_token"), ::tele_rest::toJsonValue(m_secret_token));
    }
    return obj;
}

QString OAISetWebhookRequest::getUrl() const {
    return m_url;
}
void OAISetWebhookRequest::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAISetWebhookRequest::is_url_Set() const{
    return m_url_isSet;
}

bool OAISetWebhookRequest::is_url_Valid() const{
    return m_url_isValid;
}

QJsonValue OAISetWebhookRequest::getCertificate() const {
    return m_certificate;
}
void OAISetWebhookRequest::setCertificate(const QJsonValue &certificate) {
    m_certificate = certificate;
    m_certificate_isSet = true;
}

bool OAISetWebhookRequest::is_certificate_Set() const{
    return m_certificate_isSet;
}

bool OAISetWebhookRequest::is_certificate_Valid() const{
    return m_certificate_isValid;
}

QString OAISetWebhookRequest::getIpAddress() const {
    return m_ip_address;
}
void OAISetWebhookRequest::setIpAddress(const QString &ip_address) {
    m_ip_address = ip_address;
    m_ip_address_isSet = true;
}

bool OAISetWebhookRequest::is_ip_address_Set() const{
    return m_ip_address_isSet;
}

bool OAISetWebhookRequest::is_ip_address_Valid() const{
    return m_ip_address_isValid;
}

qint32 OAISetWebhookRequest::getMaxConnections() const {
    return m_max_connections;
}
void OAISetWebhookRequest::setMaxConnections(const qint32 &max_connections) {
    m_max_connections = max_connections;
    m_max_connections_isSet = true;
}

bool OAISetWebhookRequest::is_max_connections_Set() const{
    return m_max_connections_isSet;
}

bool OAISetWebhookRequest::is_max_connections_Valid() const{
    return m_max_connections_isValid;
}

QList<QString> OAISetWebhookRequest::getAllowedUpdates() const {
    return m_allowed_updates;
}
void OAISetWebhookRequest::setAllowedUpdates(const QList<QString> &allowed_updates) {
    m_allowed_updates = allowed_updates;
    m_allowed_updates_isSet = true;
}

bool OAISetWebhookRequest::is_allowed_updates_Set() const{
    return m_allowed_updates_isSet;
}

bool OAISetWebhookRequest::is_allowed_updates_Valid() const{
    return m_allowed_updates_isValid;
}

bool OAISetWebhookRequest::isDropPendingUpdates() const {
    return m_drop_pending_updates;
}
void OAISetWebhookRequest::setDropPendingUpdates(const bool &drop_pending_updates) {
    m_drop_pending_updates = drop_pending_updates;
    m_drop_pending_updates_isSet = true;
}

bool OAISetWebhookRequest::is_drop_pending_updates_Set() const{
    return m_drop_pending_updates_isSet;
}

bool OAISetWebhookRequest::is_drop_pending_updates_Valid() const{
    return m_drop_pending_updates_isValid;
}

QString OAISetWebhookRequest::getSecretToken() const {
    return m_secret_token;
}
void OAISetWebhookRequest::setSecretToken(const QString &secret_token) {
    m_secret_token = secret_token;
    m_secret_token_isSet = true;
}

bool OAISetWebhookRequest::is_secret_token_Set() const{
    return m_secret_token_isSet;
}

bool OAISetWebhookRequest::is_secret_token_Valid() const{
    return m_secret_token_isValid;
}

bool OAISetWebhookRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_certificate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ip_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_connections_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allowed_updates.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_drop_pending_updates_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_secret_token_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISetWebhookRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_url_isValid && true;
}

} // namespace tele_rest
