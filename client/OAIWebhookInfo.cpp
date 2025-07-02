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

#include "OAIWebhookInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIWebhookInfo::OAIWebhookInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhookInfo::OAIWebhookInfo() {
    this->initializeModel();
}

OAIWebhookInfo::~OAIWebhookInfo() {}

void OAIWebhookInfo::initializeModel() {

    m_url_isSet = false;
    m_url_isValid = false;

    m_has_custom_certificate_isSet = false;
    m_has_custom_certificate_isValid = false;

    m_pending_update_count_isSet = false;
    m_pending_update_count_isValid = false;

    m_ip_address_isSet = false;
    m_ip_address_isValid = false;

    m_last_error_date_isSet = false;
    m_last_error_date_isValid = false;

    m_last_error_message_isSet = false;
    m_last_error_message_isValid = false;

    m_last_synchronization_error_date_isSet = false;
    m_last_synchronization_error_date_isValid = false;

    m_max_connections_isSet = false;
    m_max_connections_isValid = false;

    m_allowed_updates_isSet = false;
    m_allowed_updates_isValid = false;
}

void OAIWebhookInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhookInfo::fromJsonObject(QJsonObject json) {

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_has_custom_certificate_isValid = ::tele_rest::fromJsonValue(m_has_custom_certificate, json[QString("has_custom_certificate")]);
    m_has_custom_certificate_isSet = !json[QString("has_custom_certificate")].isNull() && m_has_custom_certificate_isValid;

    m_pending_update_count_isValid = ::tele_rest::fromJsonValue(m_pending_update_count, json[QString("pending_update_count")]);
    m_pending_update_count_isSet = !json[QString("pending_update_count")].isNull() && m_pending_update_count_isValid;

    m_ip_address_isValid = ::tele_rest::fromJsonValue(m_ip_address, json[QString("ip_address")]);
    m_ip_address_isSet = !json[QString("ip_address")].isNull() && m_ip_address_isValid;

    m_last_error_date_isValid = ::tele_rest::fromJsonValue(m_last_error_date, json[QString("last_error_date")]);
    m_last_error_date_isSet = !json[QString("last_error_date")].isNull() && m_last_error_date_isValid;

    m_last_error_message_isValid = ::tele_rest::fromJsonValue(m_last_error_message, json[QString("last_error_message")]);
    m_last_error_message_isSet = !json[QString("last_error_message")].isNull() && m_last_error_message_isValid;

    m_last_synchronization_error_date_isValid = ::tele_rest::fromJsonValue(m_last_synchronization_error_date, json[QString("last_synchronization_error_date")]);
    m_last_synchronization_error_date_isSet = !json[QString("last_synchronization_error_date")].isNull() && m_last_synchronization_error_date_isValid;

    m_max_connections_isValid = ::tele_rest::fromJsonValue(m_max_connections, json[QString("max_connections")]);
    m_max_connections_isSet = !json[QString("max_connections")].isNull() && m_max_connections_isValid;

    m_allowed_updates_isValid = ::tele_rest::fromJsonValue(m_allowed_updates, json[QString("allowed_updates")]);
    m_allowed_updates_isSet = !json[QString("allowed_updates")].isNull() && m_allowed_updates_isValid;
}

QString OAIWebhookInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhookInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_has_custom_certificate_isSet) {
        obj.insert(QString("has_custom_certificate"), ::tele_rest::toJsonValue(m_has_custom_certificate));
    }
    if (m_pending_update_count_isSet) {
        obj.insert(QString("pending_update_count"), ::tele_rest::toJsonValue(m_pending_update_count));
    }
    if (m_ip_address_isSet) {
        obj.insert(QString("ip_address"), ::tele_rest::toJsonValue(m_ip_address));
    }
    if (m_last_error_date_isSet) {
        obj.insert(QString("last_error_date"), ::tele_rest::toJsonValue(m_last_error_date));
    }
    if (m_last_error_message_isSet) {
        obj.insert(QString("last_error_message"), ::tele_rest::toJsonValue(m_last_error_message));
    }
    if (m_last_synchronization_error_date_isSet) {
        obj.insert(QString("last_synchronization_error_date"), ::tele_rest::toJsonValue(m_last_synchronization_error_date));
    }
    if (m_max_connections_isSet) {
        obj.insert(QString("max_connections"), ::tele_rest::toJsonValue(m_max_connections));
    }
    if (m_allowed_updates.size() > 0) {
        obj.insert(QString("allowed_updates"), ::tele_rest::toJsonValue(m_allowed_updates));
    }
    return obj;
}

QString OAIWebhookInfo::getUrl() const {
    return m_url;
}
void OAIWebhookInfo::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIWebhookInfo::is_url_Set() const{
    return m_url_isSet;
}

bool OAIWebhookInfo::is_url_Valid() const{
    return m_url_isValid;
}

bool OAIWebhookInfo::isHasCustomCertificate() const {
    return m_has_custom_certificate;
}
void OAIWebhookInfo::setHasCustomCertificate(const bool &has_custom_certificate) {
    m_has_custom_certificate = has_custom_certificate;
    m_has_custom_certificate_isSet = true;
}

bool OAIWebhookInfo::is_has_custom_certificate_Set() const{
    return m_has_custom_certificate_isSet;
}

bool OAIWebhookInfo::is_has_custom_certificate_Valid() const{
    return m_has_custom_certificate_isValid;
}

qint32 OAIWebhookInfo::getPendingUpdateCount() const {
    return m_pending_update_count;
}
void OAIWebhookInfo::setPendingUpdateCount(const qint32 &pending_update_count) {
    m_pending_update_count = pending_update_count;
    m_pending_update_count_isSet = true;
}

bool OAIWebhookInfo::is_pending_update_count_Set() const{
    return m_pending_update_count_isSet;
}

bool OAIWebhookInfo::is_pending_update_count_Valid() const{
    return m_pending_update_count_isValid;
}

QString OAIWebhookInfo::getIpAddress() const {
    return m_ip_address;
}
void OAIWebhookInfo::setIpAddress(const QString &ip_address) {
    m_ip_address = ip_address;
    m_ip_address_isSet = true;
}

bool OAIWebhookInfo::is_ip_address_Set() const{
    return m_ip_address_isSet;
}

bool OAIWebhookInfo::is_ip_address_Valid() const{
    return m_ip_address_isValid;
}

qint32 OAIWebhookInfo::getLastErrorDate() const {
    return m_last_error_date;
}
void OAIWebhookInfo::setLastErrorDate(const qint32 &last_error_date) {
    m_last_error_date = last_error_date;
    m_last_error_date_isSet = true;
}

bool OAIWebhookInfo::is_last_error_date_Set() const{
    return m_last_error_date_isSet;
}

bool OAIWebhookInfo::is_last_error_date_Valid() const{
    return m_last_error_date_isValid;
}

QString OAIWebhookInfo::getLastErrorMessage() const {
    return m_last_error_message;
}
void OAIWebhookInfo::setLastErrorMessage(const QString &last_error_message) {
    m_last_error_message = last_error_message;
    m_last_error_message_isSet = true;
}

bool OAIWebhookInfo::is_last_error_message_Set() const{
    return m_last_error_message_isSet;
}

bool OAIWebhookInfo::is_last_error_message_Valid() const{
    return m_last_error_message_isValid;
}

qint32 OAIWebhookInfo::getLastSynchronizationErrorDate() const {
    return m_last_synchronization_error_date;
}
void OAIWebhookInfo::setLastSynchronizationErrorDate(const qint32 &last_synchronization_error_date) {
    m_last_synchronization_error_date = last_synchronization_error_date;
    m_last_synchronization_error_date_isSet = true;
}

bool OAIWebhookInfo::is_last_synchronization_error_date_Set() const{
    return m_last_synchronization_error_date_isSet;
}

bool OAIWebhookInfo::is_last_synchronization_error_date_Valid() const{
    return m_last_synchronization_error_date_isValid;
}

qint32 OAIWebhookInfo::getMaxConnections() const {
    return m_max_connections;
}
void OAIWebhookInfo::setMaxConnections(const qint32 &max_connections) {
    m_max_connections = max_connections;
    m_max_connections_isSet = true;
}

bool OAIWebhookInfo::is_max_connections_Set() const{
    return m_max_connections_isSet;
}

bool OAIWebhookInfo::is_max_connections_Valid() const{
    return m_max_connections_isValid;
}

QList<QString> OAIWebhookInfo::getAllowedUpdates() const {
    return m_allowed_updates;
}
void OAIWebhookInfo::setAllowedUpdates(const QList<QString> &allowed_updates) {
    m_allowed_updates = allowed_updates;
    m_allowed_updates_isSet = true;
}

bool OAIWebhookInfo::is_allowed_updates_Set() const{
    return m_allowed_updates_isSet;
}

bool OAIWebhookInfo::is_allowed_updates_Valid() const{
    return m_allowed_updates_isValid;
}

bool OAIWebhookInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_custom_certificate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pending_update_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ip_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_error_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_error_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_synchronization_error_date_isSet) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhookInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_url_isValid && m_has_custom_certificate_isValid && m_pending_update_count_isValid && true;
}

} // namespace tele_rest
