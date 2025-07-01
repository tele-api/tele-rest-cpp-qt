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

#include "OAIPreCheckoutQuery.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPreCheckoutQuery::OAIPreCheckoutQuery(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPreCheckoutQuery::OAIPreCheckoutQuery() {
    this->initializeModel();
}

OAIPreCheckoutQuery::~OAIPreCheckoutQuery() {}

void OAIPreCheckoutQuery::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_from_isSet = false;
    m_from_isValid = false;

    m_currency_isSet = false;
    m_currency_isValid = false;

    m_total_amount_isSet = false;
    m_total_amount_isValid = false;

    m_invoice_payload_isSet = false;
    m_invoice_payload_isValid = false;

    m_shipping_option_id_isSet = false;
    m_shipping_option_id_isValid = false;

    m_order_info_isSet = false;
    m_order_info_isValid = false;
}

void OAIPreCheckoutQuery::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPreCheckoutQuery::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_from_isValid = ::tele_rest::fromJsonValue(m_from, json[QString("from")]);
    m_from_isSet = !json[QString("from")].isNull() && m_from_isValid;

    m_currency_isValid = ::tele_rest::fromJsonValue(m_currency, json[QString("currency")]);
    m_currency_isSet = !json[QString("currency")].isNull() && m_currency_isValid;

    m_total_amount_isValid = ::tele_rest::fromJsonValue(m_total_amount, json[QString("total_amount")]);
    m_total_amount_isSet = !json[QString("total_amount")].isNull() && m_total_amount_isValid;

    m_invoice_payload_isValid = ::tele_rest::fromJsonValue(m_invoice_payload, json[QString("invoice_payload")]);
    m_invoice_payload_isSet = !json[QString("invoice_payload")].isNull() && m_invoice_payload_isValid;

    m_shipping_option_id_isValid = ::tele_rest::fromJsonValue(m_shipping_option_id, json[QString("shipping_option_id")]);
    m_shipping_option_id_isSet = !json[QString("shipping_option_id")].isNull() && m_shipping_option_id_isValid;

    m_order_info_isValid = ::tele_rest::fromJsonValue(m_order_info, json[QString("order_info")]);
    m_order_info_isSet = !json[QString("order_info")].isNull() && m_order_info_isValid;
}

QString OAIPreCheckoutQuery::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPreCheckoutQuery::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_from.isSet()) {
        obj.insert(QString("from"), ::tele_rest::toJsonValue(m_from));
    }
    if (m_currency_isSet) {
        obj.insert(QString("currency"), ::tele_rest::toJsonValue(m_currency));
    }
    if (m_total_amount_isSet) {
        obj.insert(QString("total_amount"), ::tele_rest::toJsonValue(m_total_amount));
    }
    if (m_invoice_payload_isSet) {
        obj.insert(QString("invoice_payload"), ::tele_rest::toJsonValue(m_invoice_payload));
    }
    if (m_shipping_option_id_isSet) {
        obj.insert(QString("shipping_option_id"), ::tele_rest::toJsonValue(m_shipping_option_id));
    }
    if (m_order_info.isSet()) {
        obj.insert(QString("order_info"), ::tele_rest::toJsonValue(m_order_info));
    }
    return obj;
}

QString OAIPreCheckoutQuery::getId() const {
    return m_id;
}
void OAIPreCheckoutQuery::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIPreCheckoutQuery::is_id_Set() const{
    return m_id_isSet;
}

bool OAIPreCheckoutQuery::is_id_Valid() const{
    return m_id_isValid;
}

OAIUser OAIPreCheckoutQuery::getFrom() const {
    return m_from;
}
void OAIPreCheckoutQuery::setFrom(const OAIUser &from) {
    m_from = from;
    m_from_isSet = true;
}

bool OAIPreCheckoutQuery::is_from_Set() const{
    return m_from_isSet;
}

bool OAIPreCheckoutQuery::is_from_Valid() const{
    return m_from_isValid;
}

QString OAIPreCheckoutQuery::getCurrency() const {
    return m_currency;
}
void OAIPreCheckoutQuery::setCurrency(const QString &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAIPreCheckoutQuery::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAIPreCheckoutQuery::is_currency_Valid() const{
    return m_currency_isValid;
}

qint32 OAIPreCheckoutQuery::getTotalAmount() const {
    return m_total_amount;
}
void OAIPreCheckoutQuery::setTotalAmount(const qint32 &total_amount) {
    m_total_amount = total_amount;
    m_total_amount_isSet = true;
}

bool OAIPreCheckoutQuery::is_total_amount_Set() const{
    return m_total_amount_isSet;
}

bool OAIPreCheckoutQuery::is_total_amount_Valid() const{
    return m_total_amount_isValid;
}

QString OAIPreCheckoutQuery::getInvoicePayload() const {
    return m_invoice_payload;
}
void OAIPreCheckoutQuery::setInvoicePayload(const QString &invoice_payload) {
    m_invoice_payload = invoice_payload;
    m_invoice_payload_isSet = true;
}

bool OAIPreCheckoutQuery::is_invoice_payload_Set() const{
    return m_invoice_payload_isSet;
}

bool OAIPreCheckoutQuery::is_invoice_payload_Valid() const{
    return m_invoice_payload_isValid;
}

QString OAIPreCheckoutQuery::getShippingOptionId() const {
    return m_shipping_option_id;
}
void OAIPreCheckoutQuery::setShippingOptionId(const QString &shipping_option_id) {
    m_shipping_option_id = shipping_option_id;
    m_shipping_option_id_isSet = true;
}

bool OAIPreCheckoutQuery::is_shipping_option_id_Set() const{
    return m_shipping_option_id_isSet;
}

bool OAIPreCheckoutQuery::is_shipping_option_id_Valid() const{
    return m_shipping_option_id_isValid;
}

OAIOrderInfo OAIPreCheckoutQuery::getOrderInfo() const {
    return m_order_info;
}
void OAIPreCheckoutQuery::setOrderInfo(const OAIOrderInfo &order_info) {
    m_order_info = order_info;
    m_order_info_isSet = true;
}

bool OAIPreCheckoutQuery::is_order_info_Set() const{
    return m_order_info_isSet;
}

bool OAIPreCheckoutQuery::is_order_info_Valid() const{
    return m_order_info_isValid;
}

bool OAIPreCheckoutQuery::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_from.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invoice_payload_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipping_option_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_info.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPreCheckoutQuery::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_from_isValid && m_currency_isValid && m_total_amount_isValid && m_invoice_payload_isValid && true;
}

} // namespace tele_rest
