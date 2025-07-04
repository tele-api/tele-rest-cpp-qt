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

#include "OAI_getUpdates_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_getUpdates_post_request::OAI_getUpdates_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_getUpdates_post_request::OAI_getUpdates_post_request() {
    this->initializeModel();
}

OAI_getUpdates_post_request::~OAI_getUpdates_post_request() {}

void OAI_getUpdates_post_request::initializeModel() {

    m_offset_isSet = false;
    m_offset_isValid = false;

    m_limit_isSet = false;
    m_limit_isValid = false;

    m_timeout_isSet = false;
    m_timeout_isValid = false;

    m_allowed_updates_isSet = false;
    m_allowed_updates_isValid = false;
}

void OAI_getUpdates_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_getUpdates_post_request::fromJsonObject(QJsonObject json) {

    m_offset_isValid = ::tele_rest::fromJsonValue(m_offset, json[QString("offset")]);
    m_offset_isSet = !json[QString("offset")].isNull() && m_offset_isValid;

    m_limit_isValid = ::tele_rest::fromJsonValue(m_limit, json[QString("limit")]);
    m_limit_isSet = !json[QString("limit")].isNull() && m_limit_isValid;

    m_timeout_isValid = ::tele_rest::fromJsonValue(m_timeout, json[QString("timeout")]);
    m_timeout_isSet = !json[QString("timeout")].isNull() && m_timeout_isValid;

    m_allowed_updates_isValid = ::tele_rest::fromJsonValue(m_allowed_updates, json[QString("allowed_updates")]);
    m_allowed_updates_isSet = !json[QString("allowed_updates")].isNull() && m_allowed_updates_isValid;
}

QString OAI_getUpdates_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_getUpdates_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_offset_isSet) {
        obj.insert(QString("offset"), ::tele_rest::toJsonValue(m_offset));
    }
    if (m_limit_isSet) {
        obj.insert(QString("limit"), ::tele_rest::toJsonValue(m_limit));
    }
    if (m_timeout_isSet) {
        obj.insert(QString("timeout"), ::tele_rest::toJsonValue(m_timeout));
    }
    if (m_allowed_updates.size() > 0) {
        obj.insert(QString("allowed_updates"), ::tele_rest::toJsonValue(m_allowed_updates));
    }
    return obj;
}

qint32 OAI_getUpdates_post_request::getOffset() const {
    return m_offset;
}
void OAI_getUpdates_post_request::setOffset(const qint32 &offset) {
    m_offset = offset;
    m_offset_isSet = true;
}

bool OAI_getUpdates_post_request::is_offset_Set() const{
    return m_offset_isSet;
}

bool OAI_getUpdates_post_request::is_offset_Valid() const{
    return m_offset_isValid;
}

qint32 OAI_getUpdates_post_request::getLimit() const {
    return m_limit;
}
void OAI_getUpdates_post_request::setLimit(const qint32 &limit) {
    m_limit = limit;
    m_limit_isSet = true;
}

bool OAI_getUpdates_post_request::is_limit_Set() const{
    return m_limit_isSet;
}

bool OAI_getUpdates_post_request::is_limit_Valid() const{
    return m_limit_isValid;
}

qint32 OAI_getUpdates_post_request::getTimeout() const {
    return m_timeout;
}
void OAI_getUpdates_post_request::setTimeout(const qint32 &timeout) {
    m_timeout = timeout;
    m_timeout_isSet = true;
}

bool OAI_getUpdates_post_request::is_timeout_Set() const{
    return m_timeout_isSet;
}

bool OAI_getUpdates_post_request::is_timeout_Valid() const{
    return m_timeout_isValid;
}

QList<QString> OAI_getUpdates_post_request::getAllowedUpdates() const {
    return m_allowed_updates;
}
void OAI_getUpdates_post_request::setAllowedUpdates(const QList<QString> &allowed_updates) {
    m_allowed_updates = allowed_updates;
    m_allowed_updates_isSet = true;
}

bool OAI_getUpdates_post_request::is_allowed_updates_Set() const{
    return m_allowed_updates_isSet;
}

bool OAI_getUpdates_post_request::is_allowed_updates_Valid() const{
    return m_allowed_updates_isValid;
}

bool OAI_getUpdates_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_offset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_timeout_isSet) {
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

bool OAI_getUpdates_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
