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

/*
 * OAISuccessfulPayment.h
 *
 * This object contains basic information about a successful payment. Note that if the buyer initiates a chargeback with the relevant payment provider following this transaction, the funds may be debited from your balance. This is outside of Telegram&#39;s control.
 */

#ifndef OAISuccessfulPayment_H
#define OAISuccessfulPayment_H

#include <QJsonObject>

#include "OAIOrderInfo.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIOrderInfo;

class OAISuccessfulPayment : public OAIObject {
public:
    OAISuccessfulPayment();
    OAISuccessfulPayment(QString json);
    ~OAISuccessfulPayment() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCurrency() const;
    void setCurrency(const QString &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    qint32 getTotalAmount() const;
    void setTotalAmount(const qint32 &total_amount);
    bool is_total_amount_Set() const;
    bool is_total_amount_Valid() const;

    QString getInvoicePayload() const;
    void setInvoicePayload(const QString &invoice_payload);
    bool is_invoice_payload_Set() const;
    bool is_invoice_payload_Valid() const;

    QString getTelegramPaymentChargeId() const;
    void setTelegramPaymentChargeId(const QString &telegram_payment_charge_id);
    bool is_telegram_payment_charge_id_Set() const;
    bool is_telegram_payment_charge_id_Valid() const;

    QString getProviderPaymentChargeId() const;
    void setProviderPaymentChargeId(const QString &provider_payment_charge_id);
    bool is_provider_payment_charge_id_Set() const;
    bool is_provider_payment_charge_id_Valid() const;

    qint32 getSubscriptionExpirationDate() const;
    void setSubscriptionExpirationDate(const qint32 &subscription_expiration_date);
    bool is_subscription_expiration_date_Set() const;
    bool is_subscription_expiration_date_Valid() const;

    bool isIsRecurring() const;
    void setIsRecurring(const bool &is_recurring);
    bool is_is_recurring_Set() const;
    bool is_is_recurring_Valid() const;

    bool isIsFirstRecurring() const;
    void setIsFirstRecurring(const bool &is_first_recurring);
    bool is_is_first_recurring_Set() const;
    bool is_is_first_recurring_Valid() const;

    QString getShippingOptionId() const;
    void setShippingOptionId(const QString &shipping_option_id);
    bool is_shipping_option_id_Set() const;
    bool is_shipping_option_id_Valid() const;

    OAIOrderInfo getOrderInfo() const;
    void setOrderInfo(const OAIOrderInfo &order_info);
    bool is_order_info_Set() const;
    bool is_order_info_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    qint32 m_total_amount;
    bool m_total_amount_isSet;
    bool m_total_amount_isValid;

    QString m_invoice_payload;
    bool m_invoice_payload_isSet;
    bool m_invoice_payload_isValid;

    QString m_telegram_payment_charge_id;
    bool m_telegram_payment_charge_id_isSet;
    bool m_telegram_payment_charge_id_isValid;

    QString m_provider_payment_charge_id;
    bool m_provider_payment_charge_id_isSet;
    bool m_provider_payment_charge_id_isValid;

    qint32 m_subscription_expiration_date;
    bool m_subscription_expiration_date_isSet;
    bool m_subscription_expiration_date_isValid;

    bool m_is_recurring;
    bool m_is_recurring_isSet;
    bool m_is_recurring_isValid;

    bool m_is_first_recurring;
    bool m_is_first_recurring_isSet;
    bool m_is_first_recurring_isValid;

    QString m_shipping_option_id;
    bool m_shipping_option_id_isSet;
    bool m_shipping_option_id_isValid;

    OAIOrderInfo m_order_info;
    bool m_order_info_isSet;
    bool m_order_info_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAISuccessfulPayment)

#endif // OAISuccessfulPayment_H
