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

#include "OAIAnswerShippingQueryRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIAnswerShippingQueryRequest::OAIAnswerShippingQueryRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAnswerShippingQueryRequest::OAIAnswerShippingQueryRequest() {
    this->initializeModel();
}

OAIAnswerShippingQueryRequest::~OAIAnswerShippingQueryRequest() {}

void OAIAnswerShippingQueryRequest::initializeModel() {

    m_shipping_query_id_isSet = false;
    m_shipping_query_id_isValid = false;

    m_ok_isSet = false;
    m_ok_isValid = false;

    m_shipping_options_isSet = false;
    m_shipping_options_isValid = false;

    m_error_message_isSet = false;
    m_error_message_isValid = false;
}

void OAIAnswerShippingQueryRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAnswerShippingQueryRequest::fromJsonObject(QJsonObject json) {

    m_shipping_query_id_isValid = ::tele_rest::fromJsonValue(m_shipping_query_id, json[QString("shipping_query_id")]);
    m_shipping_query_id_isSet = !json[QString("shipping_query_id")].isNull() && m_shipping_query_id_isValid;

    m_ok_isValid = ::tele_rest::fromJsonValue(m_ok, json[QString("ok")]);
    m_ok_isSet = !json[QString("ok")].isNull() && m_ok_isValid;

    m_shipping_options_isValid = ::tele_rest::fromJsonValue(m_shipping_options, json[QString("shipping_options")]);
    m_shipping_options_isSet = !json[QString("shipping_options")].isNull() && m_shipping_options_isValid;

    m_error_message_isValid = ::tele_rest::fromJsonValue(m_error_message, json[QString("error_message")]);
    m_error_message_isSet = !json[QString("error_message")].isNull() && m_error_message_isValid;
}

QString OAIAnswerShippingQueryRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAnswerShippingQueryRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_shipping_query_id_isSet) {
        obj.insert(QString("shipping_query_id"), ::tele_rest::toJsonValue(m_shipping_query_id));
    }
    if (m_ok_isSet) {
        obj.insert(QString("ok"), ::tele_rest::toJsonValue(m_ok));
    }
    if (m_shipping_options.size() > 0) {
        obj.insert(QString("shipping_options"), ::tele_rest::toJsonValue(m_shipping_options));
    }
    if (m_error_message_isSet) {
        obj.insert(QString("error_message"), ::tele_rest::toJsonValue(m_error_message));
    }
    return obj;
}

QString OAIAnswerShippingQueryRequest::getShippingQueryId() const {
    return m_shipping_query_id;
}
void OAIAnswerShippingQueryRequest::setShippingQueryId(const QString &shipping_query_id) {
    m_shipping_query_id = shipping_query_id;
    m_shipping_query_id_isSet = true;
}

bool OAIAnswerShippingQueryRequest::is_shipping_query_id_Set() const{
    return m_shipping_query_id_isSet;
}

bool OAIAnswerShippingQueryRequest::is_shipping_query_id_Valid() const{
    return m_shipping_query_id_isValid;
}

bool OAIAnswerShippingQueryRequest::isOk() const {
    return m_ok;
}
void OAIAnswerShippingQueryRequest::setOk(const bool &ok) {
    m_ok = ok;
    m_ok_isSet = true;
}

bool OAIAnswerShippingQueryRequest::is_ok_Set() const{
    return m_ok_isSet;
}

bool OAIAnswerShippingQueryRequest::is_ok_Valid() const{
    return m_ok_isValid;
}

QList<OAIShippingOption> OAIAnswerShippingQueryRequest::getShippingOptions() const {
    return m_shipping_options;
}
void OAIAnswerShippingQueryRequest::setShippingOptions(const QList<OAIShippingOption> &shipping_options) {
    m_shipping_options = shipping_options;
    m_shipping_options_isSet = true;
}

bool OAIAnswerShippingQueryRequest::is_shipping_options_Set() const{
    return m_shipping_options_isSet;
}

bool OAIAnswerShippingQueryRequest::is_shipping_options_Valid() const{
    return m_shipping_options_isValid;
}

QString OAIAnswerShippingQueryRequest::getErrorMessage() const {
    return m_error_message;
}
void OAIAnswerShippingQueryRequest::setErrorMessage(const QString &error_message) {
    m_error_message = error_message;
    m_error_message_isSet = true;
}

bool OAIAnswerShippingQueryRequest::is_error_message_Set() const{
    return m_error_message_isSet;
}

bool OAIAnswerShippingQueryRequest::is_error_message_Valid() const{
    return m_error_message_isValid;
}

bool OAIAnswerShippingQueryRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_shipping_query_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ok_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipping_options.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAnswerShippingQueryRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_shipping_query_id_isValid && m_ok_isValid && true;
}

} // namespace tele_rest
